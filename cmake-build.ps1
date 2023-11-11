New-Item -Name 'build' -ItemType 'Directory' -Force
Set-Location -Path 'build'

Start-Process -FilePath 'cmake' -ArgumentList '..' -NoNewWindow -Wait
Start-Process -FilePath 'cmake' -ArgumentList '--build', '.' -NoNewWindow -Wait