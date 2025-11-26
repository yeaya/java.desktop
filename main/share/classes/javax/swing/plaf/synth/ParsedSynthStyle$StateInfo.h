#ifndef _javax_swing_plaf_synth_ParsedSynthStyle$StateInfo_h_
#define _javax_swing_plaf_synth_ParsedSynthStyle$StateInfo_h_
//$ class javax.swing.plaf.synth.ParsedSynthStyle$StateInfo
//$ extends sun.swing.plaf.synth.DefaultSynthStyle$StateInfo

#include <java/lang/Array.h>
#include <sun/swing/plaf/synth/DefaultSynthStyle$StateInfo.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class ParsedSynthStyle$PainterInfo;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class ParsedSynthStyle$StateInfo : public ::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo {
	$class(ParsedSynthStyle$StateInfo, $NO_CLASS_INIT, ::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo)
public:
	ParsedSynthStyle$StateInfo();
	void init$();
	void init$(::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo* info);
	virtual ::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo* addTo(::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo* info) override;
	virtual $Object* clone() override;
	virtual $Array<::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo>* getPainters();
	virtual void setPainters($Array<::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo>* painterInfo);
	virtual $String* toString() override;
	$Array<::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo>* _painterInfo = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_ParsedSynthStyle$StateInfo_h_