#include <javax/sound/sampled/Line.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/LineListener.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineListener = ::javax::sound::sampled::LineListener;

namespace javax {
	namespace sound {
		namespace sampled {

$MethodInfo _Line_MethodInfo_[] = {
	{"addLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getControl", "(Ljavax/sound/sampled/Control$Type;)Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $ABSTRACT},
	{"getControls", "()[Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLineInfo", "()Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $ABSTRACT},
	{"isControlSupported", "(Ljavax/sound/sampled/Control$Type;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isOpen", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"open", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"removeLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Line_InnerClassesInfo_[] = {
	{"javax.sound.sampled.Line$Info", "javax.sound.sampled.Line", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Line_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.sampled.Line",
	nullptr,
	"java.lang.AutoCloseable",
	nullptr,
	_Line_MethodInfo_,
	nullptr,
	nullptr,
	_Line_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.sampled.Line$Info"
};

$Object* allocate$Line($Class* clazz) {
	return $of($alloc(Line));
}

$Class* Line::load$($String* name, bool initialize) {
	$loadClass(Line, name, initialize, &_Line_ClassInfo_, allocate$Line);
	return class$;
}

$Class* Line::class$ = nullptr;

		} // sampled
	} // sound
} // javax