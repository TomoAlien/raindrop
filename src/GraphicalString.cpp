#include "pch.h"

#include "Sprite.h"
#include "Font.h"
#include "GraphicalString.h"

GraphicalString::GraphicalString()
    : Sprite(false),
    mFont(NULL)
{
    SetSize(1); // Default size, so it doesn't scale to 0
    SetZ(0);
}

void GraphicalString::SetFont(Font* _Font)
{
    mFont = _Font;
}

Font* GraphicalString::GetFont() const
{
    return mFont;
}

void GraphicalString::SetText(std::string _Text)
{
    mText = _Text;
}

std::string GraphicalString::GetText() const
{
    return mText;
}

void GraphicalString::Render()
{
    if (!mFont) return;
    mFont->SetColor(Red, Green, Blue);
    mFont->SetAlpha(Alpha);
    mFont->Render(mText, Vec2(0, 0), GetMatrix());
}