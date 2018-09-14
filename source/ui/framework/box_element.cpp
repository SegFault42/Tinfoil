#include "ui/framework/box_element.hpp"

#include "util/graphics_util.hpp"
#include "error.hpp"

namespace tin::ui
{
    BoxElement::BoxElement(u32 width, u32 height, u32 posX, u32 posY) :
        Element(width, height, posX, posY)
    {

    }

    void BoxElement::DrawElement()
    {
        for (u32 y = 0; y < m_dimensions.height; y++)
        {
            for (u32 x = 0; x < m_dimensions.width; x++)
            {
                u32 pixelX = x + m_position.x;
                u32 pixelY = y + m_position.y;

                tin::util::DrawPixel(pixelX, pixelY, m_colour);
            }
        }
    }

    void BoxElement::SetColour(tin::util::Colour colour)
    {
        m_colour = colour;
    }
}