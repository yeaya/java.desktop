#include <javax/swing/text/Position.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _Position_MethodInfo_[] = {
	{"getOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Position_InnerClassesInfo_[] = {
	{"javax.swing.text.Position$Bias", "javax.swing.text.Position", "Bias", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _Position_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.Position",
	nullptr,
	nullptr,
	nullptr,
	_Position_MethodInfo_,
	nullptr,
	nullptr,
	_Position_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.Position$Bias"
};

$Object* allocate$Position($Class* clazz) {
	return $of($alloc(Position));
}

$Class* Position::load$($String* name, bool initialize) {
	$loadClass(Position, name, initialize, &_Position_ClassInfo_, allocate$Position);
	return class$;
}

$Class* Position::class$ = nullptr;

		} // text
	} // swing
} // javax