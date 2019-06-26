.PHONY: clean All

All:
	@echo "----------Building project:[ wavelength_calculator - Debug ]----------"
	@cd "wavelength_calculator" && "$(MAKE)" -f  "wavelength_calculator.mk"
clean:
	@echo "----------Cleaning project:[ wavelength_calculator - Debug ]----------"
	@cd "wavelength_calculator" && "$(MAKE)" -f  "wavelength_calculator.mk" clean
