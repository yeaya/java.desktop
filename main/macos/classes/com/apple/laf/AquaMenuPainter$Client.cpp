#include <com/apple/laf/AquaMenuPainter$Client.h>

#include <com/apple/laf/AquaMenuPainter.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaMenuPainter$Client_MethodInfo_[] = {
	{"paintBackground", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AquaMenuPainter$Client_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaMenuPainter$Client", "com.apple.laf.AquaMenuPainter", "Client", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaMenuPainter$Client_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.apple.laf.AquaMenuPainter$Client",
	nullptr,
	nullptr,
	nullptr,
	_AquaMenuPainter$Client_MethodInfo_,
	nullptr,
	nullptr,
	_AquaMenuPainter$Client_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaMenuPainter"
};

$Object* allocate$AquaMenuPainter$Client($Class* clazz) {
	return $of($alloc(AquaMenuPainter$Client));
}

$Class* AquaMenuPainter$Client::load$($String* name, bool initialize) {
	$loadClass(AquaMenuPainter$Client, name, initialize, &_AquaMenuPainter$Client_ClassInfo_, allocate$AquaMenuPainter$Client);
	return class$;
}

$Class* AquaMenuPainter$Client::class$ = nullptr;

		} // laf
	} // apple
} // com