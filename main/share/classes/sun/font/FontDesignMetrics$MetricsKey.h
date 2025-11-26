#ifndef _sun_font_FontDesignMetrics$MetricsKey_h_
#define _sun_font_FontDesignMetrics$MetricsKey_h_
//$ class sun.font.FontDesignMetrics$MetricsKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
		}
	}
}

namespace sun {
	namespace font {

class FontDesignMetrics$MetricsKey : public ::java::lang::Object {
	$class(FontDesignMetrics$MetricsKey, 0, ::java::lang::Object)
public:
	FontDesignMetrics$MetricsKey();
	void init$();
	void init$(::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc);
	virtual bool equals(Object$* key) override;
	virtual int32_t hashCode() override;
	virtual void init(::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc);
	::java::awt::Font* font = nullptr;
	::java::awt::font::FontRenderContext* frc = nullptr;
	int32_t hash = 0;
	static ::sun::font::FontDesignMetrics$MetricsKey* key;
};

	} // font
} // sun

#endif // _sun_font_FontDesignMetrics$MetricsKey_h_