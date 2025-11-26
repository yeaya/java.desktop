#include <javax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector.h>

#include <java/util/Vector.h>
#include <javax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink.h>
#include <javax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $JEditorPane$JEditorPaneAccessibleHypertextSupport = ::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport;
using $JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink = ::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {

$FieldInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector, this$1)},
	{}
};

$MethodInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport;)V", nullptr, $PRIVATE, $method(static_cast<void(JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector::*)($JEditorPane$JEditorPaneAccessibleHypertextSupport*)>(&JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector::init$))},
	{"baseElementIndex", "(Ljavax/swing/text/Element;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport", "javax.swing.JEditorPane", "JEditorPaneAccessibleHypertextSupport", $PROTECTED},
	{"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector", "javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport", "LinkVector", $PRIVATE},
	{"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink", "javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport", "HTMLLink", $PUBLIC},
	{}
};

$ClassInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector",
	"java.util.Vector",
	nullptr,
	_JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector_FieldInfo_,
	_JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector_MethodInfo_,
	"Ljava/util/Vector<Ljavax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink;>;",
	nullptr,
	_JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JEditorPane"
};

$Object* allocate$JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector($Class* clazz) {
	return $of($alloc(JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector));
}

void JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector::init$($JEditorPane$JEditorPaneAccessibleHypertextSupport* this$1) {
	$set(this, this$1, this$1);
	$Vector::init$();
}

int32_t JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector::baseElementIndex($Element* e) {
	$var($JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink, l, nullptr);
	for (int32_t i = 0; i < this->elementCount; ++i) {
		$assign(l, $cast($JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink, elementAt(i)));
		if ($nc(l)->element == e) {
			return i;
		}
	}
	return -1;
}

JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector::JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector() {
}

$Class* JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector::load$($String* name, bool initialize) {
	$loadClass(JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector, name, initialize, &_JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector_ClassInfo_, allocate$JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector);
	return class$;
}

$Class* JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector::class$ = nullptr;

	} // swing
} // javax