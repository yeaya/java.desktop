#ifndef _javax_swing_plaf_synth_ParsedSynthStyle$PainterInfo_h_
#define _javax_swing_plaf_synth_ParsedSynthStyle$PainterInfo_h_
//$ class javax.swing.plaf.synth.ParsedSynthStyle$PainterInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthPainter;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class ParsedSynthStyle$PainterInfo : public ::java::lang::Object {
	$class(ParsedSynthStyle$PainterInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ParsedSynthStyle$PainterInfo();
	void init$($String* method, ::javax::swing::plaf::synth::SynthPainter* painter, int32_t direction);
	virtual void addPainter(::javax::swing::plaf::synth::SynthPainter* painter);
	virtual bool equalsPainter(::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo* info);
	virtual int32_t getDirection();
	virtual $String* getMethod();
	virtual ::javax::swing::plaf::synth::SynthPainter* getPainter();
	virtual $String* toString() override;
	$String* _method = nullptr;
	::javax::swing::plaf::synth::SynthPainter* _painter = nullptr;
	int32_t _direction = 0;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_ParsedSynthStyle$PainterInfo_h_