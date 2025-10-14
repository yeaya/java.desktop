#ifndef _sun_swing_plaf_synth_DefaultSynthStyle_h_
#define _sun_swing_plaf_synth_DefaultSynthStyle_h_
//$ class sun.swing.plaf.synth.DefaultSynthStyle
//$ extends javax.swing.plaf.synth.SynthStyle
//$ implements java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <javax/swing/plaf/synth/SynthStyle.h>

#pragma push_macro("PENDING")
#undef PENDING

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
				class SynthGraphicsUtils;
				class SynthPainter;
			}
		}
	}
}
namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {
				class DefaultSynthStyle$StateInfo;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import DefaultSynthStyle : public ::javax::swing::plaf::synth::SynthStyle, public ::java::lang::Cloneable {
	$class(DefaultSynthStyle, 0, ::javax::swing::plaf::synth::SynthStyle, ::java::lang::Cloneable)
public:
	DefaultSynthStyle();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::sun::swing::plaf::synth::DefaultSynthStyle* style);
	void init$(::java::awt::Insets* insets, bool opaque, $Array<::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo>* states, ::java::util::Map* data);
	virtual ::sun::swing::plaf::synth::DefaultSynthStyle* addTo(::sun::swing::plaf::synth::DefaultSynthStyle* style);
	virtual $Object* clone() override;
	virtual $Object* get(::javax::swing::plaf::synth::SynthContext* state, Object$* key) override;
	virtual ::java::awt::Color* getColor(::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::ColorType* type) override;
	virtual ::java::awt::Color* getColor(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* id, int32_t state, ::javax::swing::plaf::synth::ColorType* type);
	virtual ::java::awt::Color* getColorForState(::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::ColorType* type) override;
	virtual ::java::awt::Color* getColorForState(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* id, int32_t state, ::javax::swing::plaf::synth::ColorType* type);
	virtual ::java::util::Map* getData();
	virtual $Object* getDefaultValue(::javax::swing::plaf::synth::SynthContext* context, Object$* key);
	virtual ::java::awt::Font* getFont(::javax::swing::plaf::synth::SynthContext* state) override;
	virtual ::java::awt::Font* getFont(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* id, int32_t state);
	virtual ::java::awt::Font* getFontForState(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* id, int32_t state);
	virtual ::java::awt::Font* getFontForState(::javax::swing::plaf::synth::SynthContext* context) override;
	virtual ::javax::swing::plaf::synth::SynthGraphicsUtils* getGraphicsUtils(::javax::swing::plaf::synth::SynthContext* context) override;
	virtual ::java::awt::Insets* getInsets(::javax::swing::plaf::synth::SynthContext* state, ::java::awt::Insets* to) override;
	$Object* getKeyFromData(::java::util::Map* stateData, Object$* key);
	virtual ::javax::swing::plaf::synth::SynthPainter* getPainter(::javax::swing::plaf::synth::SynthContext* ss) override;
	virtual $Array<::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo>* getStateInfo();
	virtual ::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo* getStateInfo(int32_t state);
	virtual bool isOpaque(::javax::swing::plaf::synth::SynthContext* ss) override;
	virtual void setData(::java::util::Map* data);
	virtual void setFont(::java::awt::Font* font);
	virtual void setGraphicsUtils(::javax::swing::plaf::synth::SynthGraphicsUtils* graphics);
	virtual void setInsets(::java::awt::Insets* insets);
	virtual void setOpaque(bool opaque);
	virtual void setPainter(::javax::swing::plaf::synth::SynthPainter* painter);
	virtual void setStateInfo($Array<::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo>* states);
	virtual $String* toString() override;
	static $Object* PENDING;
	bool opaque = false;
	::java::awt::Insets* insets = nullptr;
	$Array<::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo>* states = nullptr;
	::java::util::Map* data = nullptr;
	::java::awt::Font* font = nullptr;
	::javax::swing::plaf::synth::SynthGraphicsUtils* synthGraphics = nullptr;
	::javax::swing::plaf::synth::SynthPainter* painter = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#pragma pop_macro("PENDING")

#endif // _sun_swing_plaf_synth_DefaultSynthStyle_h_