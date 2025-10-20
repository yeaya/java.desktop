#include <javax/swing/JEditorPane$PageLoader$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane$PageLoader.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
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
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {

$FieldInfo _JEditorPane$PageLoader$2_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JEditorPane$PageLoader;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$PageLoader$2, this$1)},
	{}
};

$MethodInfo _JEditorPane$PageLoader$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JEditorPane$PageLoader;)V", nullptr, 0, $method(static_cast<void(JEditorPane$PageLoader$2::*)($JEditorPane$PageLoader*)>(&JEditorPane$PageLoader$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JEditorPane$PageLoader$2_EnclosingMethodInfo_ = {
	"javax.swing.JEditorPane$PageLoader",
	"doInBackground",
	"()Ljava/net/URL;"
};

$InnerClassInfo _JEditorPane$PageLoader$2_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$PageLoader", "javax.swing.JEditorPane", "PageLoader", 0},
	{"javax.swing.JEditorPane$PageLoader$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JEditorPane$PageLoader$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JEditorPane$PageLoader$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_JEditorPane$PageLoader$2_FieldInfo_,
	_JEditorPane$PageLoader$2_MethodInfo_,
	nullptr,
	&_JEditorPane$PageLoader$2_EnclosingMethodInfo_,
	_JEditorPane$PageLoader$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JEditorPane"
};

$Object* allocate$JEditorPane$PageLoader$2($Class* clazz) {
	return $of($alloc(JEditorPane$PageLoader$2));
}

void JEditorPane$PageLoader$2::init$($JEditorPane$PageLoader* this$1) {
	$set(this, this$1, this$1);
}

void JEditorPane$PageLoader$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($Document);
	$var($URL, u, $cast($URL, $nc($($nc(this->this$1->this$0)->getDocument()))->getProperty($Document::StreamDescriptionProperty)));
	$var($String, ref, $nc(u)->getRef());
	$nc(this->this$1->this$0)->scrollToReference(ref);
}

JEditorPane$PageLoader$2::JEditorPane$PageLoader$2() {
}

$Class* JEditorPane$PageLoader$2::load$($String* name, bool initialize) {
	$loadClass(JEditorPane$PageLoader$2, name, initialize, &_JEditorPane$PageLoader$2_ClassInfo_, allocate$JEditorPane$PageLoader$2);
	return class$;
}

$Class* JEditorPane$PageLoader$2::class$ = nullptr;

	} // swing
} // javax