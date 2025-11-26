#ifndef _sun_swing_plaf_synth_StyleAssociation_h_
#define _sun_swing_plaf_synth_StyleAssociation_h_
//$ class sun.swing.plaf.synth.StyleAssociation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Matcher;
			class Pattern;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthStyle;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export StyleAssociation : public ::java::lang::Object {
	$class(StyleAssociation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StyleAssociation();
	void init$($String* text, ::javax::swing::plaf::synth::SynthStyle* style, int32_t id);
	static ::sun::swing::plaf::synth::StyleAssociation* createStyleAssociation($String* text, ::javax::swing::plaf::synth::SynthStyle* style);
	static ::sun::swing::plaf::synth::StyleAssociation* createStyleAssociation($String* text, ::javax::swing::plaf::synth::SynthStyle* style, int32_t id);
	virtual int32_t getID();
	virtual ::javax::swing::plaf::synth::SynthStyle* getStyle();
	virtual $String* getText();
	virtual bool matches(::java::lang::CharSequence* path);
	::javax::swing::plaf::synth::SynthStyle* _style = nullptr;
	::java::util::regex::Pattern* _pattern = nullptr;
	::java::util::regex::Matcher* _matcher = nullptr;
	int32_t _id = 0;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_StyleAssociation_h_