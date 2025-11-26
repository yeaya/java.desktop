#include <javax/swing/JEditorPane$PageLoader$3.h>

#include <java/net/URL.h>
#include <javax/swing/JEditorPane$PageLoader.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $URL = ::java::net::URL;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JEditorPane$PageLoader = ::javax::swing::JEditorPane$PageLoader;

namespace javax {
	namespace swing {

$FieldInfo _JEditorPane$PageLoader$3_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JEditorPane$PageLoader;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$PageLoader$3, this$1)},
	{}
};

$MethodInfo _JEditorPane$PageLoader$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JEditorPane$PageLoader;)V", nullptr, 0, $method(static_cast<void(JEditorPane$PageLoader$3::*)($JEditorPane$PageLoader*)>(&JEditorPane$PageLoader$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JEditorPane$PageLoader$3_EnclosingMethodInfo_ = {
	"javax.swing.JEditorPane$PageLoader",
	"doInBackground",
	"()Ljava/net/URL;"
};

$InnerClassInfo _JEditorPane$PageLoader$3_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$PageLoader", "javax.swing.JEditorPane", "PageLoader", 0},
	{"javax.swing.JEditorPane$PageLoader$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JEditorPane$PageLoader$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JEditorPane$PageLoader$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_JEditorPane$PageLoader$3_FieldInfo_,
	_JEditorPane$PageLoader$3_MethodInfo_,
	nullptr,
	&_JEditorPane$PageLoader$3_EnclosingMethodInfo_,
	_JEditorPane$PageLoader$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JEditorPane"
};

$Object* allocate$JEditorPane$PageLoader$3($Class* clazz) {
	return $of($alloc(JEditorPane$PageLoader$3));
}

void JEditorPane$PageLoader$3::init$($JEditorPane$PageLoader* this$1) {
	$set(this, this$1, this$1);
}

void JEditorPane$PageLoader$3::run() {
	$JEditorPane::access$000(this->this$1->this$0, "page"_s, this->this$1->old, this->this$1->page);
}

JEditorPane$PageLoader$3::JEditorPane$PageLoader$3() {
}

$Class* JEditorPane$PageLoader$3::load$($String* name, bool initialize) {
	$loadClass(JEditorPane$PageLoader$3, name, initialize, &_JEditorPane$PageLoader$3_ClassInfo_, allocate$JEditorPane$PageLoader$3);
	return class$;
}

$Class* JEditorPane$PageLoader$3::class$ = nullptr;

	} // swing
} // javax