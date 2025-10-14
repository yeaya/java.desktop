#ifndef _sun_swing_plaf_synth_DefaultSynthStyle$StateInfo_h_
#define _sun_swing_plaf_synth_DefaultSynthStyle$StateInfo_h_
//$ class sun.swing.plaf.synth.DefaultSynthStyle$StateInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
		class Font;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class ColorType;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export DefaultSynthStyle$StateInfo : public ::java::lang::Object {
	$class(DefaultSynthStyle$StateInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultSynthStyle$StateInfo();
	void init$();
	void init$(int32_t state, ::java::awt::Font* font, $Array<::java::awt::Color>* colors);
	void init$(::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo* info);
	virtual ::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo* addTo(::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo* info);
	virtual $Object* clone() override;
	virtual ::java::awt::Color* getColor(::javax::swing::plaf::synth::ColorType* type);
	virtual $Array<::java::awt::Color>* getColors();
	virtual int32_t getComponentState();
	virtual ::java::util::Map* getData();
	virtual ::java::awt::Font* getFont();
	virtual void setColors($Array<::java::awt::Color>* colors);
	virtual void setComponentState(int32_t state);
	virtual void setData(::java::util::Map* data);
	virtual void setFont(::java::awt::Font* font);
	virtual $String* toString() override;
	::java::util::Map* data = nullptr;
	::java::awt::Font* font = nullptr;
	$Array<::java::awt::Color>* colors = nullptr;
	int32_t state = 0;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_DefaultSynthStyle$StateInfo_h_