.PHONY: clean All

All:
	@echo "----------Building project:[ LearnCpp - Debug ]----------"
	@cd "LearnCpp" && "$(MAKE)" -f  "LearnCpp.mk"
clean:
	@echo "----------Cleaning project:[ LearnCpp - Debug ]----------"
	@cd "LearnCpp" && "$(MAKE)" -f  "LearnCpp.mk" clean
