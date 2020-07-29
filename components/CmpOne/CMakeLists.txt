idf_component_register(
	SRCS 
		"src/Cmp/One/ClassA.cpp"
		"src/Cmp/One/ClassB.cpp"
	INCLUDE_DIRS "src"
	REQUIRES nvs_flash mqtt spiffs 
)