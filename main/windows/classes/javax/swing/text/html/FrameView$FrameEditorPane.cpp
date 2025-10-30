#include <javax/swing/text/html/FrameView$FrameEditorPane.h>

#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/html/FrameView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $EditorKit = ::javax::swing::text::EditorKit;
using $FrameView = ::javax::swing::text::html::FrameView;
using $FrameEditorPaneTag = ::sun::swing::text::html::FrameEditorPaneTag;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _FrameView$FrameEditorPane_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/FrameView;", nullptr, $FINAL | $SYNTHETIC, $field(FrameView$FrameEditorPane, this$0)},
	{}
};

$MethodInfo _FrameView$FrameEditorPane_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/html/FrameView;)V", nullptr, 0, $method(static_cast<void(FrameView$FrameEditorPane::*)($FrameView*)>(&FrameView$FrameEditorPane::init$))},
	{"getEditorKitForContentType", "(Ljava/lang/String;)Ljavax/swing/text/EditorKit;", nullptr, $PUBLIC},
	{"getFrameView", "()Ljavax/swing/text/html/FrameView;", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FrameView$FrameEditorPane_InnerClassesInfo_[] = {
	{"javax.swing.text.html.FrameView$FrameEditorPane", "javax.swing.text.html.FrameView", "FrameEditorPane", 0},
	{}
};

$ClassInfo _FrameView$FrameEditorPane_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.FrameView$FrameEditorPane",
	"javax.swing.JEditorPane",
	"sun.swing.text.html.FrameEditorPaneTag",
	_FrameView$FrameEditorPane_FieldInfo_,
	_FrameView$FrameEditorPane_MethodInfo_,
	nullptr,
	nullptr,
	_FrameView$FrameEditorPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.FrameView"
};

$Object* allocate$FrameView$FrameEditorPane($Class* clazz) {
	return $of($alloc(FrameView$FrameEditorPane));
}

$String* FrameView$FrameEditorPane::toString() {
	 return this->$JEditorPane::toString();
}

int32_t FrameView$FrameEditorPane::hashCode() {
	 return this->$JEditorPane::hashCode();
}

bool FrameView$FrameEditorPane::equals(Object$* arg0) {
	 return this->$JEditorPane::equals(arg0);
}

$Object* FrameView$FrameEditorPane::clone() {
	 return this->$JEditorPane::clone();
}

void FrameView$FrameEditorPane::finalize() {
	this->$JEditorPane::finalize();
}

void FrameView$FrameEditorPane::init$($FrameView* this$0) {
	$set(this, this$0, this$0);
	$JEditorPane::init$();
}

$EditorKit* FrameView$FrameEditorPane::getEditorKitForContentType($String* type) {
	$useLocalCurrentObjectStackCache();
	$var($EditorKit, editorKit, $JEditorPane::getEditorKitForContentType(type));
	$var($JEditorPane, outerMostJEditorPane, nullptr);
	if (($assign(outerMostJEditorPane, this->this$0->getOutermostJEditorPane())) != nullptr) {
		$var($EditorKit, inheritedEditorKit, $nc(outerMostJEditorPane)->getEditorKitForContentType(type));
		if (!$of($nc($of(editorKit))->getClass())->equals($nc($of(inheritedEditorKit))->getClass())) {
			$assign(editorKit, $cast($EditorKit, $nc(inheritedEditorKit)->clone()));
			setEditorKitForContentType(type, editorKit);
		}
	}
	return editorKit;
}

$FrameView* FrameView$FrameEditorPane::getFrameView() {
	return this->this$0;
}

FrameView$FrameEditorPane::FrameView$FrameEditorPane() {
}

$Class* FrameView$FrameEditorPane::load$($String* name, bool initialize) {
	$loadClass(FrameView$FrameEditorPane, name, initialize, &_FrameView$FrameEditorPane_ClassInfo_, allocate$FrameView$FrameEditorPane);
	return class$;
}

$Class* FrameView$FrameEditorPane::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax