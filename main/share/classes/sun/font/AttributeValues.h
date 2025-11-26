#ifndef _sun_font_AttributeValues_h_
#define _sun_font_AttributeValues_h_
//$ class sun.font.AttributeValues
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("DEFINED_KEY")
#undef DEFINED_KEY
#pragma push_macro("MASK_ALL")
#undef MASK_ALL

namespace java {
	namespace awt {
		class Font;
		class Paint;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class GraphicAttribute;
			class NumericShaper;
			class TransformAttribute;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Point2D$Double;
		}
	}
}
namespace java {
	namespace awt {
		namespace im {
			class InputMethodHighlight;
		}
	}
}
namespace java {
	namespace text {
		class Annotation;
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Map;
	}
}
namespace sun {
	namespace font {
		class EAttribute;
	}
}

namespace sun {
	namespace font {

class AttributeValues : public ::java::lang::Cloneable {
	$class(AttributeValues, 0, ::java::lang::Cloneable)
public:
	AttributeValues();
	void init$();
	bool allDefined(int32_t mask);
	bool anyDefined(int32_t mask);
	bool anyNonDefault(int32_t mask);
	::sun::font::AttributeValues* applyIMHighlight();
	virtual ::sun::font::AttributeValues* clone() override;
	void defineAll(int32_t mask);
	virtual bool equals(Object$* rhs) override;
	bool equals(::sun::font::AttributeValues* rhs);
	static bool equals(Object$* lhs, Object$* rhs);
	static ::java::awt::geom::AffineTransform* extractRotation(::java::awt::geom::Point2D$Double* pt, ::java::awt::geom::AffineTransform* tx, bool andTranslation);
	static ::java::awt::geom::AffineTransform* extractXRotation(::java::awt::geom::AffineTransform* tx, bool andTranslation);
	static ::java::awt::geom::AffineTransform* extractYRotation(::java::awt::geom::AffineTransform* tx, bool andTranslation);
	static ::sun::font::AttributeValues* fromMap(::java::util::Map* map);
	static ::sun::font::AttributeValues* fromMap(::java::util::Map* map, int32_t mask);
	static ::sun::font::AttributeValues* fromSerializableHashtable(::java::util::Hashtable* ht);
	$Object* get(::sun::font::EAttribute* a);
	::java::awt::Paint* getBackground();
	::java::awt::geom::AffineTransform* getBaselineTransform();
	static ::java::awt::geom::AffineTransform* getBaselineTransform(::java::util::Map* map);
	int32_t getBidiEmbedding();
	::java::awt::font::GraphicAttribute* getCharReplacement();
	::java::awt::geom::AffineTransform* getCharTransform();
	static ::java::awt::geom::AffineTransform* getCharTransform(::java::util::Map* map);
	$String* getFamily();
	::java::awt::Font* getFont();
	::java::awt::Paint* getForeground();
	$Object* getInputMethodHighlight();
	int32_t getInputMethodUnderline();
	float getJustification();
	static float getJustification(::java::util::Map* map);
	int32_t getKerning();
	int32_t getLigatures();
	static int32_t getMask(::sun::font::EAttribute* att);
	static int32_t getMask($Array<::sun::font::EAttribute>* atts);
	::java::awt::font::NumericShaper* getNumericShaping();
	static ::java::awt::font::NumericShaper* getNumericShaping(::java::util::Map* map);
	float getPosture();
	int32_t getRunDirection();
	float getSize();
	bool getStrikethrough();
	int32_t getSuperscript();
	bool getSwapColors();
	float getTracking();
	::java::awt::geom::AffineTransform* getTransform();
	int32_t getUnderline();
	float getWeight();
	float getWidth();
	virtual int32_t hashCode() override;
	bool i_equals(::sun::font::EAttribute* a, ::sun::font::AttributeValues* src);
	$Object* i_get(::sun::font::EAttribute* a);
	void i_set(::sun::font::EAttribute* a, ::sun::font::AttributeValues* src);
	void i_set(::sun::font::EAttribute* a, Object$* o);
	bool i_validate(::sun::font::EAttribute* a);
	static bool is16Hashtable(::java::util::Hashtable* ht);
	bool isDefined(::sun::font::EAttribute* a);
	bool isNonDefault(::sun::font::EAttribute* a);
	::sun::font::AttributeValues* merge(::java::util::Map* map);
	::sun::font::AttributeValues* merge(::java::util::Map* map, int32_t mask);
	::sun::font::AttributeValues* merge(::sun::font::AttributeValues* src);
	::sun::font::AttributeValues* merge(::sun::font::AttributeValues* src, int32_t mask);
	void set(::sun::font::EAttribute* a, ::sun::font::AttributeValues* src);
	void set(::sun::font::EAttribute* a, Object$* o);
	void setBackground(::java::awt::Paint* f);
	void setBidiEmbedding(int32_t f);
	void setCharReplacement(::java::awt::font::GraphicAttribute* f);
	void setDefault(::sun::font::EAttribute* a);
	void setFamily($String* f);
	void setFont(::java::awt::Font* f);
	void setForeground(::java::awt::Paint* f);
	void setInputMethodHighlight(::java::text::Annotation* f);
	void setInputMethodHighlight(::java::awt::im::InputMethodHighlight* f);
	void setInputMethodUnderline(int32_t f);
	void setJustification(float f);
	void setKerning(int32_t f);
	void setLigatures(int32_t f);
	void setNumericShaping(::java::awt::font::NumericShaper* f);
	void setPosture(float f);
	void setRunDirection(int32_t f);
	void setSize(float f);
	void setStrikethrough(bool f);
	void setSuperscript(int32_t f);
	void setSwapColors(bool f);
	void setTracking(float f);
	void setTransform(::java::awt::geom::AffineTransform* f);
	void setTransform(::java::awt::font::TransformAttribute* f);
	void setUnderline(int32_t f);
	void setWeight(float f);
	void setWidth(float f);
	::java::util::Map* toMap(::java::util::Map* fill);
	::java::util::Hashtable* toSerializableHashtable();
	virtual $String* toString() override;
	void unset(::sun::font::EAttribute* a);
	void unsetDefault();
	void update(::sun::font::EAttribute* a);
	void updateDerivedTransforms();
	int32_t defined = 0;
	int32_t nondefault = 0;
	$String* family = nullptr;
	float weight = 0.0;
	float width = 0.0;
	float posture = 0.0;
	float size = 0.0;
	float tracking = 0.0;
	::java::awt::font::NumericShaper* numericShaping = nullptr;
	::java::awt::geom::AffineTransform* transform = nullptr;
	::java::awt::font::GraphicAttribute* charReplacement = nullptr;
	::java::awt::Paint* foreground = nullptr;
	::java::awt::Paint* background = nullptr;
	float justification = 0.0;
	$Object* imHighlight = nullptr;
	::java::awt::Font* font = nullptr;
	int8_t imUnderline = 0;
	int8_t superscript = 0;
	int8_t underline = 0;
	int8_t runDirection = 0;
	int8_t bidiEmbedding = 0;
	int8_t kerning = 0;
	int8_t ligatures = 0;
	bool strikethrough = false;
	bool swapColors = false;
	::java::awt::geom::AffineTransform* baselineTransform = nullptr;
	::java::awt::geom::AffineTransform* charTransform = nullptr;
	static ::sun::font::AttributeValues* DEFAULT;
	static int32_t MASK_ALL;
	static $String* DEFINED_KEY;
};

	} // font
} // sun

#pragma pop_macro("DEFAULT")
#pragma pop_macro("DEFINED_KEY")
#pragma pop_macro("MASK_ALL")

#endif // _sun_font_AttributeValues_h_