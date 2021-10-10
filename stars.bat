@echo off
setlocal  enabledelayedexpansion

set string=

for /L %%i in (1,1,%1) do (
	for /L %%k in (1,1,%%i) do (
		set string=!string!*
	)
	echo !string!
	set string=
)