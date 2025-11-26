#ifndef _com_sun_java_swing_plaf_gtk_GTKStyle_h_
#define _com_sun_java_swing_plaf_gtk_GTKStyle_h_
//$ class com.sun.java.swing.plaf.gtk.GTKStyle
//$ extends javax.swing.plaf.synth.SynthStyle
//$ implements com.sun.java.swing.plaf.gtk.GTKConstants

#include <com/sun/java/swing/plaf/gtk/GTKConstants.h>
#include <javax/swing/plaf/synth/SynthStyle.h>

#pragma push_macro("BLACK_COLOR")
#undef BLACK_COLOR
#pragma push_macro("BUTTON_DEFAULT_BORDER_INSETS")
#undef BUTTON_DEFAULT_BORDER_INSETS
#pragma push_macro("CLASS_SPECIFIC_MAP")
#undef CLASS_SPECIFIC_MAP
#pragma push_macro("DEFAULT_FONT")
#undef DEFAULT_FONT
#pragma push_macro("GTK_GRAPHICS")
#undef GTK_GRAPHICS
#pragma push_macro("ICONS_MAP")
#undef ICONS_MAP
#pragma push_macro("ICON_PROPERTY_PREFIX")
#undef ICON_PROPERTY_PREFIX
#pragma push_macro("WHITE_COLOR")
#undef WHITE_COLOR

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKConstants$TextDirection;
						class GTKEngine$WidgetType;
						class GTKGraphicsUtils;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Font;
		class Insets;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class ColorType;
				class SynthContext;
				class SynthGraphicsUtils;
				class SynthPainter;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKStyle : public ::javax::swing::plaf::synth::SynthStyle, public ::com::sun::java::swing::plaf::gtk::GTKConstants {
	$class(GTKStyle, 0, ::javax::swing::plaf::synth::SynthStyle, ::com::sun::java::swing::plaf::gtk::GTKConstants)
public:
	GTKStyle();
	using ::javax::swing::plaf::synth::SynthStyle::installDefaults;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Font* userFont, ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* widgetType);
	virtual $Object* get(::javax::swing::plaf::synth::SynthContext* context, Object$* key) override;
	::java::awt::Insets* getButtonInsets(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Insets* insets);
	virtual bool getClassSpecificBoolValue(::javax::swing::plaf::synth::SynthContext* context, $String* key, bool defaultValue);
	virtual ::java::awt::Insets* getClassSpecificInsetsValue(::javax::swing::plaf::synth::SynthContext* context, $String* key, ::java::awt::Insets* defaultValue);
	static int32_t getClassSpecificIntValue(::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* wt, $String* key, int32_t defaultValue);
	virtual int32_t getClassSpecificIntValue(::javax::swing::plaf::synth::SynthContext* context, $String* key, int32_t defaultValue);
	static $Object* getClassSpecificValue(::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* wt, $String* key);
	virtual $Object* getClassSpecificValue($String* key);
	virtual ::java::awt::Color* getColor(::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::ColorType* type) override;
	virtual ::java::awt::Color* getColorForState(::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::ColorType* type) override;
	virtual ::java::awt::Font* getDefaultFont();
	virtual ::java::awt::Font* getFontForState(::javax::swing::plaf::synth::SynthContext* context) override;
	virtual ::java::awt::Color* getGTKColor(int32_t state, ::javax::swing::plaf::synth::ColorType* type);
	virtual ::java::awt::Color* getGTKColor(int32_t widgetType, int32_t state, int32_t colorType);
	virtual ::java::awt::Color* getGTKColor(::javax::swing::plaf::synth::SynthContext* context, int32_t state, ::javax::swing::plaf::synth::ColorType* type);
	virtual ::javax::swing::plaf::synth::SynthGraphicsUtils* getGraphicsUtils(::javax::swing::plaf::synth::SynthContext* context) override;
	virtual ::java::awt::Insets* getInsets(::javax::swing::plaf::synth::SynthContext* state, ::java::awt::Insets* insets) override;
	::java::awt::Insets* getMenuBarInsets(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Insets* insets);
	::java::awt::Insets* getMenuItemInsets(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Insets* insets);
	virtual ::javax::swing::plaf::synth::SynthPainter* getPainter(::javax::swing::plaf::synth::SynthContext* state) override;
	::java::awt::Insets* getRadioInsets(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Insets* insets);
	::java::awt::Insets* getScrollBarInsets(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Insets* insets);
	::java::awt::Insets* getSeparatorInsets(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Insets* insets);
	::java::awt::Insets* getSimpleInsets(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Insets* insets, int32_t n);
	::java::awt::Insets* getSliderTrackInsets(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Insets* insets);
	::javax::swing::Icon* getStockIcon(::javax::swing::plaf::synth::SynthContext* context, $String* key, int32_t type);
	::java::awt::Color* getStyleSpecificColor(::javax::swing::plaf::synth::SynthContext* context, int32_t state, ::javax::swing::plaf::synth::ColorType* type);
	::javax::swing::Icon* getStyleSpecificIcon($String* key, ::com::sun::java::swing::plaf::gtk::GTKConstants$TextDirection* direction, int32_t type);
	::java::awt::Insets* getTabbedPaneTabInsets(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Insets* insets);
	::java::awt::Insets* getTextFieldInsets(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Insets* insets);
	::java::awt::Insets* getThicknessInsets(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Insets* insets);
	virtual int32_t getXThickness();
	virtual int32_t getYThickness();
	virtual void installDefaults(::javax::swing::plaf::synth::SynthContext* context) override;
	virtual bool isOpaque(::javax::swing::plaf::synth::SynthContext* context) override;
	static $Object* nativeGetClassValue(int32_t widgetType, $String* key);
	static int32_t nativeGetColorForState(int32_t widgetType, int32_t state, int32_t typeID);
	static $String* nativeGetPangoFontName(int32_t widgetType);
	static int32_t nativeGetXThickness(int32_t widgetType);
	static int32_t nativeGetYThickness(int32_t widgetType);
	virtual $String* toString() override;
	static $String* ICON_PROPERTY_PREFIX;
	static ::java::awt::Color* BLACK_COLOR;
	static ::java::awt::Color* WHITE_COLOR;
	static ::java::awt::Font* DEFAULT_FONT;
	static ::java::awt::Insets* BUTTON_DEFAULT_BORDER_INSETS;
	static ::com::sun::java::swing::plaf::gtk::GTKGraphicsUtils* GTK_GRAPHICS;
	static ::java::util::Map* CLASS_SPECIFIC_MAP;
	static ::java::util::Map* ICONS_MAP;
	::java::awt::Font* font = nullptr;
	int32_t widgetType = 0;
	int32_t xThickness = 0;
	int32_t yThickness = 0;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("BLACK_COLOR")
#pragma pop_macro("BUTTON_DEFAULT_BORDER_INSETS")
#pragma pop_macro("CLASS_SPECIFIC_MAP")
#pragma pop_macro("DEFAULT_FONT")
#pragma pop_macro("GTK_GRAPHICS")
#pragma pop_macro("ICONS_MAP")
#pragma pop_macro("ICON_PROPERTY_PREFIX")
#pragma pop_macro("WHITE_COLOR")

#endif // _com_sun_java_swing_plaf_gtk_GTKStyle_h_