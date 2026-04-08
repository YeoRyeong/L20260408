#pragma once
#include "Component.h"
#include "RenderableComponent.h"

class UTextRender : public UComponent, public IRenderableComponent
{
public:
	UTextRender();
	virtual ~UTextRender();

	virtual void BeginPlay() override;

	virtual void Tick() override;

	virtual void Render() override;
};

