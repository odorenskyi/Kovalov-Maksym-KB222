<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<CodeBlocks_project_file>
	<FileVersion major="1" minor="6" />
	<Project>
		<Option title="my_module" />
		<Option pch_mode="2" />
		<Option compiler="gcc" />
		<Build>
			<Target title="Debug">
				<Option output="bin/Debug/my_module" prefix_auto="1" extension_auto="1" />
				<Option object_output="obj/Debug/" />
				<Option type="3" />
				<Option compiler="gcc" />
				<Option createDefFile="1" />
				<Option createStaticLib="1" />
				<Compiler>
					<Add option="-Wall" />
					<Add option="-DBUILD_DLL" />
					<Add option="-g" />
				</Compiler>
				<Linker>
					<Add library="user32" />
				</Linker>
			</Target>
		</Build>
		<Unit filename="main.cpp" />
		<Unit filename="main.h" />
		<Extensions>
			<lib_finder disable_auto="1" />
		</Extensions>
	</Project>
</CodeBlocks_project_file>
