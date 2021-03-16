Get-item .\.gh-pages\* -Exclude .* | rm -recurse
dotnet publish -o .\.gh-pages\ -c release
cd .\.gh-pages\
mi .\wwwroot\* .
rm .\wwwroot\
"" | Out-File .nojekyll
(Get-Content -path .\index.html)-replace '<base href="/">',  '<base href="/ABlazorPong/">' | Set-Content .\index.html
git add --all
git commit -m gh-pages-publish
git push
cd ..