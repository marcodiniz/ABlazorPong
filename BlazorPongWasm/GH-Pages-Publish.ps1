$localIndex = (Get-Content -path .\BlazorPongWasm\wwwroot\index.html)
$localIndex -replace '<base href="/">',  '<base href="/ABlazorPong/">' | Set-Content .\BlazorPongWasm\wwwroot\index.html
Get-item .\.gh-pages\* -Exclude .* | rm -recurse
dotnet publish -o .\.gh-pages\ -c release
cd .\.gh-pages\
mi .\wwwroot\* .
rm .\wwwroot\
"" | Out-File .nojekyll
git add --all
git commit -m gh-pages-publish
git push