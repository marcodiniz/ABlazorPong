git clone https://github.com/marcodiniz/ABlazorPong --branch gh-pages --single-branch \.gh-pages
Get-item * -Exclude .* | rm -recurse
git checkout -b gh-pages
cddotnet publish -o c:\temp\blazorpongpublish -c release
mi .\.gh-pages\wwwroot\* .\.gh-pages\


ri .\publish\* -Recurse -force
mkdir .\publish\wwwroot
git -C .\publish\wwwroot\  init
git -C publish\wwwroot checkout -b gh-pages
git -C publish\wwwroot add --all
dotnet publish -o publish\ -c release

git -C "publish/" add --all