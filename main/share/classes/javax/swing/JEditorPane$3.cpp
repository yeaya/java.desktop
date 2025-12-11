#include <javax/swing/JEditorPane$3.h>

#include <java/net/URLConnection.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLConnection = ::java::net::URLConnection;
using $JEditorPane = ::javax::swing::JEditorPane;

namespace javax {
	namespace swing {

$FieldInfo _JEditorPane$3_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JEditorPane;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$3, this$0)},
	{"val$conn", "Ljava/net/URLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$3, val$conn)},
	{}
};

$MethodInfo _JEditorPane$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JEditorPane;Ljava/net/URLConnection;)V", "()V", 0, $method(static_cast<void(JEditorPane$3::*)($JEditorPane*,$URLConnection*)>(&JEditorPane$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JEditorPane$3_EnclosingMethodInfo_ = {
	"javax.swing.JEditorPane",
	"getStream",
	"(Ljava/net/URL;)Ljava/io/InputStream;"
};

$InnerClassInfo _JEditorPane$3_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JEditorPane$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JEditorPane$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_JEditorPane$3_FieldInfo_,
	_JEditorPane$3_MethodInfo_,
	nullptr,
	&_JEditorPane$3_EnclosingMethodInfo_,
	_JEditorPane$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JEditorPane"
};

$Object* allocate$JEditorPane$3($Class* clazz) {
	return $of($alloc(JEditorPane$3));
}

void JEditorPane$3::init$($JEditorPane* this$0, $URLConnection* val$conn) {
	$set(this, this$0, this$0);
	$set(this, val$conn, val$conn);
}

void JEditorPane$3::run() {
	this->this$0->handleConnectionProperties(this->val$conn);
}

JEditorPane$3::JEditorPane$3() {
}

$Class* JEditorPane$3::load$($String* name, bool initialize) {
	$loadClass(JEditorPane$3, name, initialize, &_JEditorPane$3_ClassInfo_, allocate$JEditorPane$3);
	return class$;
}

$Class* JEditorPane$3::class$ = nullptr;

	} // swing
} // javax