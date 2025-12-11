#include <javax/swing/JEditorPane$PageLoader$1.h>

#include <java/net/URL.h>
#include <javax/swing/JEditorPane$PageLoader.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JEditorPane$PageLoader = ::javax::swing::JEditorPane$PageLoader;

namespace javax {
	namespace swing {

$FieldInfo _JEditorPane$PageLoader$1_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JEditorPane$PageLoader;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$PageLoader$1, this$1)},
	{}
};

$MethodInfo _JEditorPane$PageLoader$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JEditorPane$PageLoader;)V", nullptr, 0, $method(static_cast<void(JEditorPane$PageLoader$1::*)($JEditorPane$PageLoader*)>(&JEditorPane$PageLoader$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JEditorPane$PageLoader$1_EnclosingMethodInfo_ = {
	"javax.swing.JEditorPane$PageLoader",
	"doInBackground",
	"()Ljava/net/URL;"
};

$InnerClassInfo _JEditorPane$PageLoader$1_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$PageLoader", "javax.swing.JEditorPane", "PageLoader", 0},
	{"javax.swing.JEditorPane$PageLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JEditorPane$PageLoader$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JEditorPane$PageLoader$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_JEditorPane$PageLoader$1_FieldInfo_,
	_JEditorPane$PageLoader$1_MethodInfo_,
	nullptr,
	&_JEditorPane$PageLoader$1_EnclosingMethodInfo_,
	_JEditorPane$PageLoader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JEditorPane"
};

$Object* allocate$JEditorPane$PageLoader$1($Class* clazz) {
	return $of($alloc(JEditorPane$PageLoader$1));
}

void JEditorPane$PageLoader$1::init$($JEditorPane$PageLoader* this$1) {
	$set(this, this$1, this$1);
}

void JEditorPane$PageLoader$1::run() {
	$set(this->this$1, doc, $nc(this->this$1->this$0)->initializeModel($nc(this->this$1->this$0)->kit, this->this$1->page));
	$nc(this->this$1->this$0)->setDocument(this->this$1->doc);
}

JEditorPane$PageLoader$1::JEditorPane$PageLoader$1() {
}

$Class* JEditorPane$PageLoader$1::load$($String* name, bool initialize) {
	$loadClass(JEditorPane$PageLoader$1, name, initialize, &_JEditorPane$PageLoader$1_ClassInfo_, allocate$JEditorPane$PageLoader$1);
	return class$;
}

$Class* JEditorPane$PageLoader$1::class$ = nullptr;

	} // swing
} // javax