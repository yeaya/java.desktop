#ifndef _sun_font_ExtendedTextLabel_h_
#define _sun_font_ExtendedTextLabel_h_
//$ class sun.font.ExtendedTextLabel
//$ extends sun.font.TextLabel
//$ implements sun.font.TextLineComponent

#include <sun/font/TextLabel.h>
#include <sun/font/TextLineComponent.h>

namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
		}
	}
}

namespace sun {
	namespace font {

class ExtendedTextLabel : public ::sun::font::TextLabel, public ::sun::font::TextLineComponent {
	$class(ExtendedTextLabel, $NO_CLASS_INIT, ::sun::font::TextLabel, ::sun::font::TextLineComponent)
public:
	ExtendedTextLabel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::font::TextLabel::getVisualBounds;
	using ::sun::font::TextLabel::getLogicalBounds;
	using ::sun::font::TextLabel::getItalicBounds;
	using ::sun::font::TextLabel::getOutline;
	using ::sun::font::TextLabel::draw;
	virtual ::sun::font::TextLineComponent* applyJustificationDeltas($floats* deltas, int32_t deltaStart, $booleans* flags) override {return nullptr;}
	virtual bool caretAtOffsetIsValid(int32_t offset) override {return false;}
	virtual $Object* clone() override;
	virtual void draw(::java::awt::Graphics2D* g, float x, float y) override {}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual float getAdvanceBetween(int32_t logicalStart, int32_t logicalLimit) override {return 0.0;}
	virtual float getCharAdvance(int32_t logicalIndex) override {return 0.0;}
	virtual float getCharX(int32_t logicalIndex) override {return 0.0;}
	virtual float getCharY(int32_t logicalIndex) override {return 0.0;}
	virtual ::sun::font::CoreMetrics* getCoreMetrics() override {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* getItalicBounds() override;
	virtual void getJustificationInfos($Array<::java::awt::font::GlyphJustificationInfo>* infos, int32_t infoStart, int32_t charStart, int32_t charLimit) override {}
	virtual int32_t getLineBreakIndex(int32_t logicalStart, float width) override {return 0;}
	virtual ::java::awt::geom::Rectangle2D* getLogicalBounds() override;
	virtual int32_t getNumCharacters() override {return 0;}
	virtual int32_t getNumJustificationInfos() override {return 0;}
	virtual ::java::awt::Shape* getOutline(float x, float y) override {return nullptr;}
	virtual ::sun::font::TextLineComponent* getSubset(int32_t start, int32_t limit, int32_t dir) override {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* getVisualBounds() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::geom::Rectangle2D* getCharVisualBounds(int32_t logicalIndex, float x, float y) {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* getCharVisualBounds(int32_t logicalIndex) override;
	virtual int32_t logicalToVisual(int32_t logicalIndex) {return 0;}
	virtual $String* toString() override;
	virtual int32_t visualToLogical(int32_t visualIndex) {return 0;}
};

	} // font
} // sun

#endif // _sun_font_ExtendedTextLabel_h_