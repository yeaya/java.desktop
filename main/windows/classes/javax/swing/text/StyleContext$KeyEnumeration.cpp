#include <javax/swing/text/StyleContext$KeyEnumeration.h>

#include <java/util/NoSuchElementException.h>
#include <javax/swing/text/StyleContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $StyleContext = ::javax::swing::text::StyleContext;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StyleContext$KeyEnumeration_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/StyleContext;", nullptr, $FINAL | $SYNTHETIC, $field(StyleContext$KeyEnumeration, this$0)},
	{"attr", "[Ljava/lang/Object;", nullptr, 0, $field(StyleContext$KeyEnumeration, attr)},
	{"i", "I", nullptr, 0, $field(StyleContext$KeyEnumeration, i)},
	{}
};

$MethodInfo _StyleContext$KeyEnumeration_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/StyleContext;[Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(StyleContext$KeyEnumeration::*)($StyleContext*,$ObjectArray*)>(&StyleContext$KeyEnumeration::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyleContext$KeyEnumeration_InnerClassesInfo_[] = {
	{"javax.swing.text.StyleContext$KeyEnumeration", "javax.swing.text.StyleContext", "KeyEnumeration", 0},
	{}
};

$ClassInfo _StyleContext$KeyEnumeration_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.StyleContext$KeyEnumeration",
	"java.lang.Object",
	"java.util.Enumeration",
	_StyleContext$KeyEnumeration_FieldInfo_,
	_StyleContext$KeyEnumeration_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/Object;>;",
	nullptr,
	_StyleContext$KeyEnumeration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyleContext"
};

$Object* allocate$StyleContext$KeyEnumeration($Class* clazz) {
	return $of($alloc(StyleContext$KeyEnumeration));
}

void StyleContext$KeyEnumeration::init$($StyleContext* this$0, $ObjectArray* attr) {
	$set(this, this$0, this$0);
	$set(this, attr, attr);
	this->i = 0;
}

bool StyleContext$KeyEnumeration::hasMoreElements() {
	return this->i < $nc(this->attr)->length;
}

$Object* StyleContext$KeyEnumeration::nextElement() {
	if (this->i < $nc(this->attr)->length) {
		$var($Object0, o, $nc(this->attr)->get(this->i));
		this->i += 2;
		return $of(o);
	}
	$throwNew($NoSuchElementException);
}

StyleContext$KeyEnumeration::StyleContext$KeyEnumeration() {
}

$Class* StyleContext$KeyEnumeration::load$($String* name, bool initialize) {
	$loadClass(StyleContext$KeyEnumeration, name, initialize, &_StyleContext$KeyEnumeration_ClassInfo_, allocate$StyleContext$KeyEnumeration);
	return class$;
}

$Class* StyleContext$KeyEnumeration::class$ = nullptr;

		} // text
	} // swing
} // javax