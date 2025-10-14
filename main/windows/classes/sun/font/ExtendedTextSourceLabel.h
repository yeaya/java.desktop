#ifndef _sun_font_ExtendedTextSourceLabel_h_
#define _sun_font_ExtendedTextSourceLabel_h_
//$ class sun.font.ExtendedTextSourceLabel
//$ extends sun.font.ExtendedTextLabel
//$ implements sun.font.Decoration$Label

#include <java/lang/Array.h>
#include <sun/font/Decoration$Label.h>
#include <sun/font/ExtendedTextLabel.h>

#pragma push_macro("DEBUG")
#undef DEBUG

namespace java {
	namespace awt {
		class Font;
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
		class StandardGlyphVector;
		class TextLineComponent;
		class TextSource;
	}
}

namespace sun {
	namespace font {

class ExtendedTextSourceLabel : public ::sun::font::ExtendedTextLabel, public ::sun::font::Decoration$Label {
	$class(ExtendedTextSourceLabel, 0, ::sun::font::ExtendedTextLabel, ::sun::font::Decoration$Label)
public:
	ExtendedTextSourceLabel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::font::ExtendedTextLabel::getCharVisualBounds;
	using ::sun::font::ExtendedTextLabel::getVisualBounds;
	using ::sun::font::ExtendedTextLabel::getAlignBounds;
	using ::sun::font::ExtendedTextLabel::getItalicBounds;
	using ::sun::font::ExtendedTextLabel::getOutline;
	using ::sun::font::ExtendedTextLabel::draw;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::font::TextSource* source, ::sun::font::Decoration* decorator);
	void init$(::sun::font::TextSource* source, ::sun::font::ExtendedTextSourceLabel* oldLabel, int32_t offset);
	virtual ::sun::font::TextLineComponent* applyJustificationDeltas($floats* deltas, int32_t deltaStart, $booleans* flags) override;
	virtual bool caretAtOffsetIsValid(int32_t offset) override;
	virtual ::java::awt::geom::Rectangle2D* createAlignBounds();
	virtual $floats* createCharinfo();
	virtual ::sun::font::StandardGlyphVector* createGV();
	virtual ::java::awt::geom::Rectangle2D* createItalicBounds();
	virtual ::java::awt::geom::Rectangle2D* createLogicalBounds();
	virtual void draw(::java::awt::Graphics2D* g, float x, float y) override;
	void finishInit();
	virtual float getAdvance() override;
	virtual float getAdvanceBetween(int32_t start, int32_t limit) override;
	virtual ::java::awt::geom::Rectangle2D* getAlignBounds(float x, float y) override;
	virtual ::java::awt::geom::AffineTransform* getBaselineTransform() override;
	virtual float getCharAdvance(int32_t index) override;
	virtual ::java::awt::geom::Rectangle2D* getCharVisualBounds(int32_t index, float x, float y) override;
	virtual float getCharX(int32_t index) override;
	virtual float getCharY(int32_t index) override;
	$floats* getCharinfo();
	virtual ::sun::font::CoreMetrics* getCoreMetrics() override;
	::sun::font::StandardGlyphVector* getGV();
	virtual ::java::awt::geom::Rectangle2D* getItalicBounds(float x, float y) override;
	virtual void getJustificationInfos($Array<::java::awt::font::GlyphJustificationInfo>* infos, int32_t infoStart, int32_t charStart, int32_t charLimit) override;
	virtual int32_t getLineBreakIndex(int32_t start, float width) override;
	virtual ::java::awt::geom::Rectangle2D* getLogicalBounds() override;
	virtual ::java::awt::geom::Rectangle2D* getLogicalBounds(float x, float y) override;
	virtual int32_t getNumCharacters() override;
	virtual int32_t getNumJustificationInfos() override;
	virtual ::java::awt::Shape* getOutline(float x, float y) override;
	virtual ::java::awt::Rectangle* getPixelBounds(::java::awt::font::FontRenderContext* frc, float x, float y) override;
	virtual ::sun::font::TextLineComponent* getSubset(int32_t start, int32_t limit, int32_t dir) override;
	virtual ::java::awt::geom::Rectangle2D* getVisualBounds(float x, float y) override;
	virtual void handleDraw(::java::awt::Graphics2D* g, float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D* handleGetCharVisualBounds(int32_t index) override;
	virtual ::java::awt::Shape* handleGetOutline(float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D* handleGetVisualBounds() override;
	virtual bool isSimple() override;
	virtual int32_t l2v(int32_t index);
	virtual int32_t logicalToVisual(int32_t logicalIndex) override;
	virtual $String* toString() override;
	virtual int32_t v2l(int32_t index);
	void validate(int32_t index);
	virtual int32_t visualToLogical(int32_t visualIndex) override;
	::sun::font::TextSource* source = nullptr;
	::sun::font::Decoration* decorator = nullptr;
	::java::awt::Font* font = nullptr;
	::java::awt::geom::AffineTransform* baseTX = nullptr;
	::sun::font::CoreMetrics* cm = nullptr;
	::java::awt::geom::Rectangle2D* lb = nullptr;
	::java::awt::geom::Rectangle2D* ab = nullptr;
	::java::awt::geom::Rectangle2D* vb = nullptr;
	::java::awt::geom::Rectangle2D* ib = nullptr;
	::sun::font::StandardGlyphVector* gv = nullptr;
	$floats* charinfo = nullptr;
	static const int32_t posx = 0;
	static const int32_t posy = 1;
	static const int32_t advx = 2;
	static const int32_t advy = 3;
	static const int32_t visx = 4;
	static const int32_t visy = 5;
	static const int32_t visw = 6;
	static const int32_t vish = 7;
	static const int32_t numvals = 8;
	static bool DEBUG;
};

	} // font
} // sun

#pragma pop_macro("DEBUG")

#endif // _sun_font_ExtendedTextSourceLabel_h_