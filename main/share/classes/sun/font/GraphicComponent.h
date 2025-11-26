#ifndef _sun_font_GraphicComponent_h_
#define _sun_font_GraphicComponent_h_
//$ class sun.font.GraphicComponent
//$ extends sun.font.TextLineComponent
//$ implements sun.font.Decoration$Label

#include <java/lang/Array.h>
#include <sun/font/Decoration$Label.h>
#include <sun/font/TextLineComponent.h>

#pragma push_macro("GRAPHIC_LEADING")
#undef GRAPHIC_LEADING

namespace java {
	namespace awt {
		class Graphics2D;
		class Rectangle;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
			class GlyphJustificationInfo;
			class GraphicAttribute;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Rectangle2D;
		}
	}
}
namespace sun {
	namespace font {
		class CoreMetrics;
		class Decoration;
	}
}

namespace sun {
	namespace font {

class GraphicComponent : public ::sun::font::TextLineComponent, public ::sun::font::Decoration$Label {
	$class(GraphicComponent, 0, ::sun::font::TextLineComponent, ::sun::font::Decoration$Label)
public:
	GraphicComponent();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::font::GraphicAttribute* graphic, ::sun::font::Decoration* decorator, $ints* charsLtoV, $bytes* levels, int32_t start, int32_t limit, ::java::awt::geom::AffineTransform* baseTx);
	void init$(::sun::font::GraphicComponent* parent, int32_t start, int32_t limit, int32_t dir);
	virtual ::sun::font::TextLineComponent* applyJustificationDeltas($floats* deltas, int32_t deltaStart, $booleans* flags) override;
	virtual bool caretAtOffsetIsValid(int32_t index) override;
	static ::sun::font::CoreMetrics* createCoreMetrics(::java::awt::font::GraphicAttribute* graphic);
	virtual void draw(::java::awt::Graphics2D* g2d, float x, float y) override;
	virtual float getAdvance() override;
	virtual float getAdvanceBetween(int32_t start, int32_t limit) override;
	virtual ::java::awt::geom::AffineTransform* getBaselineTransform() override;
	virtual float getCharAdvance(int32_t index) override;
	virtual ::java::awt::geom::Rectangle2D* getCharVisualBounds(int32_t index) override;
	virtual float getCharX(int32_t index) override;
	virtual float getCharY(int32_t index) override;
	virtual ::sun::font::CoreMetrics* getCoreMetrics() override;
	float getItalicAngle();
	virtual ::java::awt::geom::Rectangle2D* getItalicBounds() override;
	virtual void getJustificationInfos($Array<::java::awt::font::GlyphJustificationInfo>* infos, int32_t infoStart, int32_t charStart, int32_t charLimit) override;
	virtual int32_t getLineBreakIndex(int32_t start, float width) override;
	virtual ::java::awt::geom::Rectangle2D* getLogicalBounds() override;
	virtual int32_t getNumCharacters() override;
	virtual int32_t getNumJustificationInfos() override;
	virtual ::java::awt::Shape* getOutline(float x, float y) override;
	virtual ::java::awt::Rectangle* getPixelBounds(::java::awt::font::FontRenderContext* frc, float x, float y) override;
	virtual ::sun::font::TextLineComponent* getSubset(int32_t start, int32_t limit, int32_t dir) override;
	virtual ::java::awt::geom::Rectangle2D* getVisualBounds() override;
	virtual void handleDraw(::java::awt::Graphics2D* g2d, float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D* handleGetCharVisualBounds(int32_t index) override;
	virtual ::java::awt::Shape* handleGetOutline(float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D* handleGetVisualBounds() override;
	void initLocalOrdering($ints* charsLtoV, $bytes* levels, int32_t start, int32_t limit);
	virtual bool isSimple() override;
	virtual $String* toString() override;
	static float GRAPHIC_LEADING;
	::java::awt::font::GraphicAttribute* graphic = nullptr;
	int32_t graphicCount = 0;
	$ints* charsLtoV = nullptr;
	$bytes* levels = nullptr;
	::java::awt::geom::Rectangle2D* visualBounds = nullptr;
	float graphicAdvance = 0.0;
	::java::awt::geom::AffineTransform* baseTx = nullptr;
	::sun::font::CoreMetrics* cm = nullptr;
	::sun::font::Decoration* decorator = nullptr;
};

	} // font
} // sun

#pragma pop_macro("GRAPHIC_LEADING")

#endif // _sun_font_GraphicComponent_h_