#pragma once
#include "Component.h"
#include "RenderableComponent.h"
#include <string>

// 전방선언
class SDL_Surface;
class SDL_Texture;

class UTextRenderComponent : public UComponent, public IRenderableComponent
{
public:
	UTextRenderComponent();
	virtual ~UTextRenderComponent();

	virtual void BeginPlay() override;

	virtual void Tick() override;

	virtual void Render() override;

	void SetText(std::string InText);

protected:
	std::string Text;

	SDL_Surface* Surface;
	SDL_Texture* Texture;
};

