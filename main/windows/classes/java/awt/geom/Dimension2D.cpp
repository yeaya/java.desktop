#include <java/awt/geom/Dimension2D.h>

#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$MethodInfo _Dimension2D_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Dimension2D::*)()>(&Dimension2D::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getHeight", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getWidth", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"setSize", "(DD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSize", "(Ljava/awt/geom/Dimension2D;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Dimension2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.geom.Dimension2D",
	"java.lang.Object",
	"java.lang.Cloneable",
	nullptr,
	_Dimension2D_MethodInfo_
};

$Object* allocate$Dimension2D($Class* clazz) {
	return $of($alloc(Dimension2D));
}

void Dimension2D::init$() {
}

void Dimension2D::setSize(Dimension2D* d) {
	double var$0 = $nc(d)->getWidth();
	setSize(var$0, d->getHeight());
}

$Object* Dimension2D::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

Dimension2D::Dimension2D() {
}

$Class* Dimension2D::load$($String* name, bool initialize) {
	$loadClass(Dimension2D, name, initialize, &_Dimension2D_ClassInfo_, allocate$Dimension2D);
	return class$;
}

$Class* Dimension2D::class$ = nullptr;

		} // geom
	} // awt
} // java