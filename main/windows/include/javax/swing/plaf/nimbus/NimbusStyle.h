#ifndef _javax_swing_plaf_nimbus_NimbusStyle_h_
#define _javax_swing_plaf_nimbus_NimbusStyle_h_
//$ class javax.swing.plaf.nimbus.NimbusStyle
//$ extends javax.swing.plaf.synth.SynthStyle

#include <java/lang/Array.h>
#include <javax/swing/plaf/synth/SynthStyle.h>

#pragma push_macro("DEFAULT_COLOR")
#undef DEFAULT_COLOR
#pragma push_macro("LARGE_KEY")
#undef LARGE_KEY
#pragma push_macro("LARGE_SCALE")
#undef LARGE_SCALE
#pragma push_macro("MINI_KEY")
#undef MINI_KEY
#pragma push_macro("MINI_SCALE")
#undef MINI_SCALE
#pragma push_macro("NULL")
#undef NULL
#pragma push_macro("SMALL_KEY")
#undef SMALL_KEY
#pragma push_macro("SMALL_SCALE")
#undef SMALL_SCALE
#pragma push_macro("STATE_COMPARATOR")
#undef STATE_COMPARATOR

namespace java {
	namespace awt {
		class Color;
		class Font;
		class Insets;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace java {
	namespace util {
		class Comparator;
		class Map;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class Painter;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class NimbusStyle$CacheKey;
				class NimbusStyle$RuntimeState;
				class NimbusStyle$Values;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class ColorType;
				class SynthContext;
				class SynthPainter;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class $import NimbusStyle : public ::javax::swing::plaf::synth::SynthStyle {
	$class(NimbusStyle, 0, ::javax::swing::plaf::synth::SynthStyle)
public:
	NimbusStyle();
	using ::javax::swing::plaf::synth::SynthStyle::installDefaults;
	void init$($String* prefix, ::javax::swing::JComponent* c);
	bool contains($StringArray* names, $String* name);
	virtual $Object* get(::javax::swing::plaf::synth::SynthContext* ctx, Object$* key) override;
	::javax::swing::Painter* getBackgroundPainter(::javax::swing::plaf::synth::SynthContext* ctx);
	::javax::swing::Painter* getBorderPainter(::javax::swing::plaf::synth::SynthContext* ctx);
	virtual ::java::awt::Color* getColorForState(::javax::swing::plaf::synth::SynthContext* ctx, ::javax::swing::plaf::synth::ColorType* type) override;
	int32_t getExtendedState(::javax::swing::plaf::synth::SynthContext* ctx, ::javax::swing::plaf::nimbus::NimbusStyle$Values* v);
	virtual ::java::awt::Font* getFontForState(::javax::swing::plaf::synth::SynthContext* ctx) override;
	::javax::swing::Painter* getForegroundPainter(::javax::swing::plaf::synth::SynthContext* ctx);
	virtual ::java::awt::Insets* getInsets(::javax::swing::plaf::synth::SynthContext* ctx, ::java::awt::Insets* in) override;
	::javax::swing::plaf::nimbus::NimbusStyle$RuntimeState* getNextState($Array<::javax::swing::plaf::nimbus::NimbusStyle$RuntimeState>* states, $ints* lastState, int32_t xstate);
	::javax::swing::Painter* getPainter(::java::util::Map* defaults, $String* key);
	virtual ::javax::swing::plaf::synth::SynthPainter* getPainter(::javax::swing::plaf::synth::SynthContext* ctx) override;
	::javax::swing::plaf::nimbus::NimbusStyle$Values* getValues(::javax::swing::plaf::synth::SynthContext* ctx);
	virtual void installDefaults(::javax::swing::plaf::synth::SynthContext* ctx) override;
	virtual bool isOpaque(::javax::swing::plaf::synth::SynthContext* ctx) override;
	static ::javax::swing::Painter* paintFilter(::javax::swing::Painter* painter);
	void validate();
	static bool $assertionsDisabled;
	static $String* LARGE_KEY;
	static $String* SMALL_KEY;
	static $String* MINI_KEY;
	static double LARGE_SCALE;
	static double SMALL_SCALE;
	static double MINI_SCALE;
	static $Object* NULL;
	static ::java::awt::Color* DEFAULT_COLOR;
	static ::java::util::Comparator* STATE_COMPARATOR;
	$String* prefix = nullptr;
	::javax::swing::plaf::synth::SynthPainter* painter = nullptr;
	::javax::swing::plaf::nimbus::NimbusStyle$Values* values = nullptr;
	::javax::swing::plaf::nimbus::NimbusStyle$CacheKey* tmpKey = nullptr;
	::java::lang::ref::WeakReference* component = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("DEFAULT_COLOR")
#pragma pop_macro("LARGE_KEY")
#pragma pop_macro("LARGE_SCALE")
#pragma pop_macro("MINI_KEY")
#pragma pop_macro("MINI_SCALE")
#pragma pop_macro("NULL")
#pragma pop_macro("SMALL_KEY")
#pragma pop_macro("SMALL_SCALE")
#pragma pop_macro("STATE_COMPARATOR")

#endif // _javax_swing_plaf_nimbus_NimbusStyle_h_