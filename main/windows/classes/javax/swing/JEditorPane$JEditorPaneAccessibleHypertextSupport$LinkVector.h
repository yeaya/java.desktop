#ifndef _javax_swing_JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector_h_
#define _javax_swing_JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector_h_
//$ class javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector
//$ extends java.util.Vector

#include <java/util/Vector.h>

namespace javax {
	namespace swing {
		class JEditorPane$JEditorPaneAccessibleHypertextSupport;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}

namespace javax {
	namespace swing {

class JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector : public ::java::util::Vector {
	$class(JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector, $NO_CLASS_INIT, ::java::util::Vector)
public:
	JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector();
	void init$(::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport* this$1);
	virtual int32_t baseElementIndex(::javax::swing::text::Element* e);
	using ::java::util::Vector::toArray;
	::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport* this$1 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector_h_