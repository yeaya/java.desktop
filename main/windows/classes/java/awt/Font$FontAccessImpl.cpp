#include <java/awt/Font$FontAccessImpl.h>

#include <java/awt/Font.h>
#include <java/awt/peer/FontPeer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/Font2D.h>
#include <sun/font/Font2DHandle.h>
#include <sun/font/FontAccess.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $FontPeer = ::java::awt::peer::FontPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $Font2DHandle = ::sun::font::Font2DHandle;
using $FontAccess = ::sun::font::FontAccess;

namespace java {
	namespace awt {

$MethodInfo _Font$FontAccessImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Font$FontAccessImpl::*)()>(&Font$FontAccessImpl::init$))},
	{"getFont2D", "(Ljava/awt/Font;)Lsun/font/Font2D;", nullptr, $PUBLIC},
	{"getFontPeer", "(Ljava/awt/Font;)Ljava/awt/peer/FontPeer;", nullptr, $PUBLIC},
	{"isCreatedFont", "(Ljava/awt/Font;)Z", nullptr, $PUBLIC},
	{"setCreatedFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setFont2D", "(Ljava/awt/Font;Lsun/font/Font2DHandle;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Font$FontAccessImpl_InnerClassesInfo_[] = {
	{"java.awt.Font$FontAccessImpl", "java.awt.Font", "FontAccessImpl", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Font$FontAccessImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Font$FontAccessImpl",
	"sun.font.FontAccess",
	nullptr,
	nullptr,
	_Font$FontAccessImpl_MethodInfo_,
	nullptr,
	nullptr,
	_Font$FontAccessImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Font"
};

$Object* allocate$Font$FontAccessImpl($Class* clazz) {
	return $of($alloc(Font$FontAccessImpl));
}

void Font$FontAccessImpl::init$() {
	$FontAccess::init$();
}

$Font2D* Font$FontAccessImpl::getFont2D($Font* font) {
	return $nc(font)->getFont2D();
}

void Font$FontAccessImpl::setFont2D($Font* font, $Font2DHandle* handle) {
	$set($nc(font), font2DHandle, handle);
}

void Font$FontAccessImpl::setCreatedFont($Font* font) {
	$nc(font)->createdFont = true;
}

bool Font$FontAccessImpl::isCreatedFont($Font* font) {
	return $nc(font)->createdFont;
}

$FontPeer* Font$FontAccessImpl::getFontPeer($Font* font) {
	return $nc(font)->getFontPeer();
}

Font$FontAccessImpl::Font$FontAccessImpl() {
}

$Class* Font$FontAccessImpl::load$($String* name, bool initialize) {
	$loadClass(Font$FontAccessImpl, name, initialize, &_Font$FontAccessImpl_ClassInfo_, allocate$Font$FontAccessImpl);
	return class$;
}

$Class* Font$FontAccessImpl::class$ = nullptr;

	} // awt
} // java