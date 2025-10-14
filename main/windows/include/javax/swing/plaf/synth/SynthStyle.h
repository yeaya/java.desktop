#ifndef _javax_swing_plaf_synth_SynthStyle_h_
#define _javax_swing_plaf_synth_SynthStyle_h_
//$ class javax.swing.plaf.synth.SynthStyle
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_VALUES")
#undef DEFAULT_VALUES
#pragma push_macro("SYNTH_GRAPHICS")
#undef SYNTH_GRAPHICS

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
				class SynthUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthStyle : public ::java::lang::Object {
	$class(SynthStyle, 0, ::java::lang::Object)
public:
	SynthStyle();
	void init$();
	virtual $Object* get(::javax::swing::plaf::synth::SynthContext* context, Object$* key);
	virtual bool getBoolean(::javax::swing::plaf::synth::SynthContext* context, Object$* key, bool defaultValue);
	virtual ::java::awt::Color* getColor(::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::ColorType* type);
	virtual ::java::awt::Color* getColorForState(::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::ColorType* type) {return nullptr;}
	static $Object* getDefaultValue(Object$* key);
	virtual ::java::awt::Font* getFont(::javax::swing::plaf::synth::SynthContext* context);
	virtual ::java::awt::Font* getFontForState(::javax::swing::plaf::synth::SynthContext* context) {return nullptr;}
	virtual ::javax::swing::plaf::synth::SynthGraphicsUtils* getGraphicsUtils(::javax::swing::plaf::synth::SynthContext* context);
	virtual ::javax::swing::Icon* getIcon(::javax::swing::plaf::synth::SynthContext* context, Object$* key);
	virtual ::java::awt::Insets* getInsets(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Insets* insets);
	virtual int32_t getInt(::javax::swing::plaf::synth::SynthContext* context, Object$* key, int32_t defaultValue);
	virtual ::javax::swing::plaf::synth::SynthPainter* getPainter(::javax::swing::plaf::synth::SynthContext* context);
	virtual $String* getString(::javax::swing::plaf::synth::SynthContext* context, Object$* key, $String* defaultValue);
	virtual void installDefaults(::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::SynthUI* ui);
	virtual void installDefaults(::javax::swing::plaf::synth::SynthContext* context);
	virtual bool isOpaque(::javax::swing::plaf::synth::SynthContext* context);
	static void populateDefaultValues();
	virtual void uninstallDefaults(::javax::swing::plaf::synth::SynthContext* context);
	static ::java::util::Map* DEFAULT_VALUES;
	static ::javax::swing::plaf::synth::SynthGraphicsUtils* SYNTH_GRAPHICS;
};

			} // synth
		} // plaf
	} // swing
} // javax

#pragma pop_macro("DEFAULT_VALUES")
#pragma pop_macro("SYNTH_GRAPHICS")

#endif // _javax_swing_plaf_synth_SynthStyle_h_