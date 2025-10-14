#ifndef _javax_swing_plaf_synth_ParsedSynthStyle_h_
#define _javax_swing_plaf_synth_ParsedSynthStyle_h_
//$ class javax.swing.plaf.synth.ParsedSynthStyle
//$ extends sun.swing.plaf.synth.DefaultSynthStyle

#include <java/lang/Array.h>
#include <sun/swing/plaf/synth/DefaultSynthStyle.h>

#pragma push_macro("DELEGATING_PAINTER_INSTANCE")
#undef DELEGATING_PAINTER_INSTANCE

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class ParsedSynthStyle$PainterInfo;
				class SynthContext;
				class SynthPainter;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class ParsedSynthStyle : public ::sun::swing::plaf::synth::DefaultSynthStyle {
	$class(ParsedSynthStyle, 0, ::sun::swing::plaf::synth::DefaultSynthStyle)
public:
	ParsedSynthStyle();
	void init$();
	void init$(::sun::swing::plaf::synth::DefaultSynthStyle* style);
	virtual ::sun::swing::plaf::synth::DefaultSynthStyle* addTo(::sun::swing::plaf::synth::DefaultSynthStyle* style) override;
	::javax::swing::plaf::synth::SynthPainter* getBestPainter(::javax::swing::plaf::synth::SynthContext* context, $String* method, int32_t direction);
	::javax::swing::plaf::synth::SynthPainter* getBestPainter($Array<::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo>* info, $String* method, int32_t direction);
	virtual ::javax::swing::plaf::synth::SynthPainter* getPainter(::javax::swing::plaf::synth::SynthContext* ss) override;
	static $Array<::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo>* mergePainterInfo($Array<::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo>* old, $Array<::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo>* newPI);
	virtual void setPainters($Array<::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo>* info);
	virtual $String* toString() override;
	static ::javax::swing::plaf::synth::SynthPainter* DELEGATING_PAINTER_INSTANCE;
	$Array<::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo>* _painters = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#pragma pop_macro("DELEGATING_PAINTER_INSTANCE")

#endif // _javax_swing_plaf_synth_ParsedSynthStyle_h_