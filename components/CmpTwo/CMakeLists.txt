idf_component_register(
	SRCS 
		"src/Cmp/Two/ClassC.cpp"
		"src/Cmp/Two/ClassD.cpp"
	INCLUDE_DIRS "src"
	REQUIRES CmpOne 
)