.PHONY: clean All

All:
	@echo "----------Building project:[ Section_8_Challenge - Debug ]----------"
	@cd "Section_8_Challenge" && "$(MAKE)" -f  "Section_8_Challenge.mk"
clean:
	@echo "----------Cleaning project:[ Section_8_Challenge - Debug ]----------"
	@cd "Section_8_Challenge" && "$(MAKE)" -f  "Section_8_Challenge.mk" clean
