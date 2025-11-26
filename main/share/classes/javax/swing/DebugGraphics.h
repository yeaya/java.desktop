#ifndef _javax_swing_DebugGraphics_h_
#define _javax_swing_DebugGraphics_h_
//$ class javax.swing.DebugGraphics
//$ extends java.awt.Graphics

#include <java/awt/Graphics.h>
#include <java/lang/Array.h>

#pragma push_macro("BUFFERED_OPTION")
#undef BUFFERED_OPTION
#pragma push_macro("FLASH_OPTION")
#undef FLASH_OPTION
#pragma push_macro("LOG_OPTION")
#undef LOG_OPTION
#pragma push_macro("NONE_OPTION")
#undef NONE_OPTION

namespace java {
	namespace awt {
		class Color;
		class Font;
		class FontMetrics;
		class Image;
		class Rectangle;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ImageObserver;
		}
	}
}
namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
	}
}
namespace javax {
	namespace swing {
		class DebugGraphicsInfo;
		class ImageIcon;
		class JComponent;
	}
}

namespace javax {
	namespace swing {

class $export DebugGraphics : public ::java::awt::Graphics {
	$class(DebugGraphics, 0, ::java::awt::Graphics)
public:
	DebugGraphics();
	using ::java::awt::Graphics::drawPolygon;
	using ::java::awt::Graphics::fillPolygon;
	using ::java::awt::Graphics::getClipBounds;
	void init$();
	void init$(::java::awt::Graphics* graphics, ::javax::swing::JComponent* component);
	void init$(::java::awt::Graphics* graphics);
	virtual void clearRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void clipRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t destX, int32_t destY) override;
	virtual ::java::awt::Graphics* create() override;
	virtual ::java::awt::Graphics* create(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual bool debugBuffered();
	static int32_t debugComponentCount();
	virtual bool debugFlash();
	::java::awt::Graphics* debugGraphics();
	virtual bool debugLog();
	virtual void dispose() override;
	virtual void draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) override;
	virtual void drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void drawBytes($bytes* data, int32_t offset, int32_t length, int32_t x, int32_t y) override;
	virtual void drawChars($chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
	virtual void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawPolyline($ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual void drawString($String* aString, int32_t x, int32_t y) override;
	virtual void drawString(::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y) override;
	virtual void fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) override;
	virtual void fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void fillOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void fillRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	static ::java::awt::Color* flashColor();
	static int32_t flashCount();
	static int32_t flashTime();
	virtual ::java::awt::Shape* getClip() override;
	virtual ::java::awt::Rectangle* getClipBounds() override;
	virtual ::java::awt::Color* getColor() override;
	virtual int32_t getDebugOptions();
	static int32_t getDebugOptions(::javax::swing::JComponent* component);
	virtual ::java::awt::Font* getFont() override;
	virtual ::java::awt::FontMetrics* getFontMetrics() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	static ::javax::swing::DebugGraphicsInfo* info();
	virtual bool isDrawingBuffer();
	static void loadImage(::java::awt::Image* img);
	static ::java::io::PrintStream* logStream();
	virtual $String* pointToString(int32_t x, int32_t y);
	virtual void setClip(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setClip(::java::awt::Shape* clip) override;
	virtual void setColor(::java::awt::Color* aColor) override;
	virtual void setDebugOptions(int32_t options);
	static void setDebugOptions(::javax::swing::JComponent* component, int32_t options);
	static void setFlashColor(::java::awt::Color* flashColor);
	static void setFlashCount(int32_t flashCount);
	static void setFlashTime(int32_t flashTime);
	virtual void setFont(::java::awt::Font* aFont) override;
	static void setLogStream(::java::io::PrintStream* stream);
	virtual void setPaintMode() override;
	virtual void setXORMode(::java::awt::Color* aColor) override;
	static int32_t shouldComponentDebug(::javax::swing::JComponent* component);
	void sleep(int32_t mSecs);
	virtual $String* toShortString();
	virtual void translate(int32_t x, int32_t y) override;
	::java::awt::Graphics* graphics = nullptr;
	::java::awt::Image* buffer = nullptr;
	int32_t debugOptions = 0;
	int32_t graphicsID = 0;
	int32_t xOffset = 0;
	int32_t yOffset = 0;
	static int32_t graphicsCount;
	static ::javax::swing::ImageIcon* imageLoadingIcon;
	static const int32_t LOG_OPTION = 1; // 1 << 0
	static const int32_t FLASH_OPTION = 2; // 1 << 1
	static const int32_t BUFFERED_OPTION = 4; // 1 << 2
	static const int32_t NONE_OPTION = (-1);
	static $Class* debugGraphicsInfoKey;
};

	} // swing
} // javax

#pragma pop_macro("BUFFERED_OPTION")
#pragma pop_macro("FLASH_OPTION")
#pragma pop_macro("LOG_OPTION")
#pragma pop_macro("NONE_OPTION")

#endif // _javax_swing_DebugGraphics_h_