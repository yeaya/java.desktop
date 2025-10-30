#include <javax/swing/text/AbstractDocument$1.h>

#include <javax/swing/text/AbstractDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AbstractDocument$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$1, this$0)},
	{}
};

$MethodInfo _AbstractDocument$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AbstractDocument;)V", nullptr, 0, $method(static_cast<void(AbstractDocument$1::*)($AbstractDocument*)>(&AbstractDocument$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AbstractDocument$1_EnclosingMethodInfo_ = {
	"javax.swing.text.AbstractDocument",
	"<init>",
	"(Ljavax/swing/text/AbstractDocument$Content;Ljavax/swing/text/AbstractDocument$AttributeContext;)V"
};

$InnerClassInfo _AbstractDocument$1_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$1", nullptr, nullptr, 0},
	{"javax.swing.text.AbstractDocument$Content", "javax.swing.text.AbstractDocument", "Content", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.text.AbstractDocument$AttributeContext", "javax.swing.text.AbstractDocument", "AttributeContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AbstractDocument$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.AbstractDocument$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AbstractDocument$1_FieldInfo_,
	_AbstractDocument$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_AbstractDocument$1_EnclosingMethodInfo_,
	_AbstractDocument$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument"
};

$Object* allocate$AbstractDocument$1($Class* clazz) {
	return $of($alloc(AbstractDocument$1));
}

void AbstractDocument$1::init$($AbstractDocument* this$0) {
	$set(this, this$0, this$0);
}

$Object* AbstractDocument$1::run() {
	return $of($System::getProperty("i18n"_s));
}

AbstractDocument$1::AbstractDocument$1() {
}

$Class* AbstractDocument$1::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument$1, name, initialize, &_AbstractDocument$1_ClassInfo_, allocate$AbstractDocument$1);
	return class$;
}

$Class* AbstractDocument$1::class$ = nullptr;

		} // text
	} // swing
} // javax