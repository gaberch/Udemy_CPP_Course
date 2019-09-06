.PHONY: clean All

All:
	@echo "----------Building project:[ Section_6_Challenge - Debug ]----------"
	@cd "Section_6_Challenge" && "$(MAKE)" -f  "Section_6_Challenge.mk"
clean:
	@echo "----------Cleaning project:[ Section_6_Challenge - Debug ]----------"
	@cd "Section_6_Challenge" && "$(MAKE)" -f  "Section_6_Challenge.mk" clean
