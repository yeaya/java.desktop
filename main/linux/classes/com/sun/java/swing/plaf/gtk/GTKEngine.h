#ifndef _com_sun_java_swing_plaf_gtk_GTKEngine_h_
#define _com_sun_java_swing_plaf_gtk_GTKEngine_h_
//$ class com.sun.java.swing.plaf.gtk.GTKEngine
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BAND_OFFSETS")
#undef BAND_OFFSETS
#pragma push_macro("CACHE_SIZE")
#undef CACHE_SIZE
#pragma push_macro("COLOR_MODELS")
#undef COLOR_MODELS
#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKConstants$ArrowType;
						class GTKConstants$ExpanderStyle;
						class GTKConstants$Orientation;
						class GTKConstants$PositionType;
						class GTKConstants$ShadowType;
						class GTKEngine$Settings;
						class GTKEngine$WidgetType;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class ColorModel;
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class ColorType;
				class Region;
				class SynthContext;
			}
		}
	}
}
namespace sun {
	namespace swing {
		class ImageCache;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKEngine : public ::java::lang::Object {
	$class(GTKEngine, 0, ::java::lang::Object)
public:
	GTKEngine();
	void init$();
	virtual ::java::awt::image::BufferedImage* finishPainting();
	virtual ::java::awt::image::BufferedImage* finishPainting(bool useCache);
	virtual $Object* getSetting(::com::sun::java::swing::plaf::gtk::GTKEngine$Settings* property);
	static int32_t getTextDirection(::javax::swing::plaf::synth::SynthContext* context);
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* getWidgetType(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* id);
	int32_t nativeFinishPainting($ints* buffer, int32_t width, int32_t height);
	void nativeSetRangeValue(int32_t widgetType, double value, double min, double max, double visible);
	void nativeStartPainting(int32_t w, int32_t h);
	$Object* native_get_gtk_setting(int32_t property);
	void native_paint_arrow(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arrowType);
	void native_paint_background(int32_t widgetType, int32_t state, int32_t x, int32_t y, int32_t width, int32_t height);
	void native_paint_box(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t synthState, int32_t dir);
	void native_paint_box_gap(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t gapSide, int32_t gapX, int32_t gapWidth);
	void native_paint_check(int32_t widgetType, int32_t synthState, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height);
	void native_paint_expander(int32_t widgetType, int32_t state, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t expanderStyle);
	void native_paint_extension(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t placement);
	void native_paint_flat_box(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, bool hasFocus);
	void native_paint_focus(int32_t widgetType, int32_t state, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height);
	void native_paint_handle(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t orientation);
	void native_paint_hline(int32_t widgetType, int32_t state, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height);
	void native_paint_option(int32_t widgetType, int32_t synthState, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height);
	void native_paint_shadow(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t synthState, int32_t dir);
	void native_paint_slider(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t orientation, bool hasFocus);
	void native_paint_vline(int32_t widgetType, int32_t state, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height);
	void native_switch_theme();
	virtual void paintArrow(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, int32_t state, ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType* shadowType, ::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType* direction, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintBackground(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, int32_t state, ::java::awt::Color* color, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintBox(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, int32_t state, ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType* shadowType, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintBoxGap(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, int32_t state, ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType* shadowType, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h, ::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType* boxGapType, int32_t tabBegin, int32_t size);
	virtual bool paintCachedImage(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $ObjectArray* args);
	virtual void paintCheck(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintExpander(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, int32_t state, ::com::sun::java::swing::plaf::gtk::GTKConstants$ExpanderStyle* expanderStyle, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintExtension(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, int32_t state, ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType* shadowType, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h, ::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType* placement, int32_t tabIndex);
	virtual void paintFlatBox(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, int32_t state, ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType* shadowType, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h, ::javax::swing::plaf::synth::ColorType* colorType);
	virtual void paintFocus(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, int32_t state, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintHandle(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, int32_t state, ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType* shadowType, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h, ::com::sun::java::swing::plaf::gtk::GTKConstants$Orientation* orientation);
	virtual void paintHline(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, int32_t state, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintOption(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintShadow(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, int32_t state, ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType* shadowType, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintSlider(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, int32_t state, ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType* shadowType, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h, ::com::sun::java::swing::plaf::gtk::GTKConstants$Orientation* orientation, bool hasFocus);
	virtual void paintVline(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, int32_t state, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void setRangeValue(::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::Region* id, double value, double min, double max, double visible);
	virtual void startPainting(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $ObjectArray* args);
	virtual void themeChanged();
	static ::com::sun::java::swing::plaf::gtk::GTKEngine* INSTANCE;
	static const int32_t CACHE_SIZE = 50;
	static ::java::util::HashMap* regionToWidgetTypeMap;
	::sun::swing::ImageCache* cache = nullptr;
	int32_t x0 = 0;
	int32_t y0 = 0;
	int32_t w0 = 0;
	int32_t h0 = 0;
	::java::awt::Graphics* graphics = nullptr;
	$ObjectArray* cacheArgs = nullptr;
	static $Array<::java::awt::image::ColorModel>* COLOR_MODELS;
	static $Array<int32_t, 2>* BAND_OFFSETS;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("BAND_OFFSETS")
#pragma pop_macro("CACHE_SIZE")
#pragma pop_macro("COLOR_MODELS")
#pragma pop_macro("INSTANCE")

#endif // _com_sun_java_swing_plaf_gtk_GTKEngine_h_