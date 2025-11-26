#ifndef _javax_swing_plaf_synth_DefaultSynthStyleFactory_h_
#define _javax_swing_plaf_synth_DefaultSynthStyleFactory_h_
//$ class javax.swing.plaf.synth.DefaultSynthStyleFactory
//$ extends javax.swing.plaf.synth.SynthStyleFactory

#include <javax/swing/plaf/synth/SynthStyleFactory.h>

#pragma push_macro("NAME")
#undef NAME
#pragma push_macro("REGION")
#undef REGION

namespace java {
	namespace util {
		class List;
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
				class Region;
				class SynthStyle;
			}
		}
	}
}
namespace sun {
	namespace swing {
		class BakedArrayList;
	}
}
namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {
				class DefaultSynthStyle;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class DefaultSynthStyleFactory : public ::javax::swing::plaf::synth::SynthStyleFactory {
	$class(DefaultSynthStyleFactory, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthStyleFactory)
public:
	DefaultSynthStyleFactory();
	void init$();
	virtual void addStyle(::sun::swing::plaf::synth::DefaultSynthStyle* style, $String* path, int32_t type);
	void cacheStyle(::java::util::List* styles, ::javax::swing::plaf::synth::SynthStyle* style);
	::javax::swing::plaf::synth::SynthStyle* getCachedStyle(::java::util::List* styles);
	::javax::swing::plaf::synth::SynthStyle* getDefaultStyle();
	void getMatchingStyles(::java::util::List* matches, ::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* id);
	virtual ::javax::swing::plaf::synth::SynthStyle* getStyle(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* id) override;
	::javax::swing::plaf::synth::SynthStyle* mergeStyles(::java::util::List* styles);
	static const int32_t NAME = 0;
	static const int32_t REGION = 1;
	::java::util::List* _styles = nullptr;
	::sun::swing::BakedArrayList* _tmpList = nullptr;
	::java::util::Map* _resolvedStyles = nullptr;
	::javax::swing::plaf::synth::SynthStyle* _defaultStyle = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#pragma pop_macro("NAME")
#pragma pop_macro("REGION")

#endif // _javax_swing_plaf_synth_DefaultSynthStyleFactory_h_