#include <com/sun/media/sound/DirectAudioDevice$DirectSDL.h>

#include <com/sun/media/sound/DirectAudioDevice$DirectDL.h>
#include <com/sun/media/sound/DirectAudioDevice.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/DataLine$Info.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/LineListener.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $DirectAudioDevice = ::com::sun::media::sound::DirectAudioDevice;
using $DirectAudioDevice$DirectDL = ::com::sun::media::sound::DirectAudioDevice$DirectDL;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;
using $DataLine$Info = ::javax::sound::sampled::DataLine$Info;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineListener = ::javax::sound::sampled::LineListener;
using $SourceDataLine = ::javax::sound::sampled::SourceDataLine;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _DirectAudioDevice$DirectSDL_MethodInfo_[] = {
	{"*addLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"*available", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $FINAL},
	{"*drain", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flush", "()V", nullptr, $PUBLIC},
	{"*getBufferSize", "()I", nullptr, $PUBLIC | $FINAL},
	{"*getControl", "(Ljavax/sound/sampled/Control$Type;)Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"*getControls", "()[Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"*getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC | $FINAL},
	{"*getFramePosition", "()I", nullptr, $PUBLIC | $FINAL},
	{"*getLevel", "()F", nullptr, $PUBLIC | $FINAL},
	{"*getLineInfo", "()Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $FINAL},
	{"*getLongFramePosition", "()J", nullptr, $PUBLIC},
	{"*getMicrosecondPosition", "()J", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/sound/sampled/DataLine$Info;Ljavax/sound/sampled/AudioFormat;ILcom/sun/media/sound/DirectAudioDevice;)V", nullptr, $PRIVATE, $method(static_cast<void(DirectAudioDevice$DirectSDL::*)($DataLine$Info*,$AudioFormat*,int32_t,$DirectAudioDevice*)>(&DirectAudioDevice$DirectSDL::init$))},
	{"*write", "([BII)I", nullptr, $PUBLIC},
	{"*open", "(Ljavax/sound/sampled/AudioFormat;I)V", nullptr, $PUBLIC | $FINAL},
	{"*open", "(Ljavax/sound/sampled/AudioFormat;)V", nullptr, $PUBLIC | $FINAL},
	{"*start", "()V", nullptr, $PUBLIC | $FINAL},
	{"*stop", "()V", nullptr, $PUBLIC | $FINAL},
	{"*isRunning", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*isActive", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*open", "()V", nullptr, $PUBLIC | $FINAL},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*removeLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"*isControlSupported", "(Ljavax/sound/sampled/Control$Type;)Z", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DirectAudioDevice$DirectSDL_InnerClassesInfo_[] = {
	{"com.sun.media.sound.DirectAudioDevice$DirectSDL", "com.sun.media.sound.DirectAudioDevice", "DirectSDL", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.media.sound.DirectAudioDevice$DirectDL", "com.sun.media.sound.DirectAudioDevice", "DirectDL", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DirectAudioDevice$DirectSDL_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.DirectAudioDevice$DirectSDL",
	"com.sun.media.sound.DirectAudioDevice$DirectDL",
	"javax.sound.sampled.SourceDataLine",
	nullptr,
	_DirectAudioDevice$DirectSDL_MethodInfo_,
	nullptr,
	nullptr,
	_DirectAudioDevice$DirectSDL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.DirectAudioDevice"
};

$Object* allocate$DirectAudioDevice$DirectSDL($Class* clazz) {
	return $of($alloc(DirectAudioDevice$DirectSDL));
}

int32_t DirectAudioDevice$DirectSDL::available() {
	 return this->$DirectAudioDevice$DirectDL::available();
}

void DirectAudioDevice$DirectSDL::drain() {
	this->$DirectAudioDevice$DirectDL::drain();
}

void DirectAudioDevice$DirectSDL::flush() {
	this->$DirectAudioDevice$DirectDL::flush();
}

int64_t DirectAudioDevice$DirectSDL::getLongFramePosition() {
	 return this->$DirectAudioDevice$DirectDL::getLongFramePosition();
}

int32_t DirectAudioDevice$DirectSDL::write($bytes* b, int32_t off, int32_t len) {
	 return this->$DirectAudioDevice$DirectDL::write(b, off, len);
}

void DirectAudioDevice$DirectSDL::open($AudioFormat* format, int32_t bufferSize) {
	this->$DirectAudioDevice$DirectDL::open(format, bufferSize);
}

void DirectAudioDevice$DirectSDL::open($AudioFormat* format) {
	this->$DirectAudioDevice$DirectDL::open(format);
}

void DirectAudioDevice$DirectSDL::start() {
	this->$DirectAudioDevice$DirectDL::start();
}

void DirectAudioDevice$DirectSDL::stop() {
	this->$DirectAudioDevice$DirectDL::stop();
}

bool DirectAudioDevice$DirectSDL::isRunning() {
	 return this->$DirectAudioDevice$DirectDL::isRunning();
}

bool DirectAudioDevice$DirectSDL::isActive() {
	 return this->$DirectAudioDevice$DirectDL::isActive();
}

int64_t DirectAudioDevice$DirectSDL::getMicrosecondPosition() {
	 return this->$DirectAudioDevice$DirectDL::getMicrosecondPosition();
}

$AudioFormat* DirectAudioDevice$DirectSDL::getFormat() {
	 return this->$DirectAudioDevice$DirectDL::getFormat();
}

int32_t DirectAudioDevice$DirectSDL::getBufferSize() {
	 return this->$DirectAudioDevice$DirectDL::getBufferSize();
}

float DirectAudioDevice$DirectSDL::getLevel() {
	 return this->$DirectAudioDevice$DirectDL::getLevel();
}

void DirectAudioDevice$DirectSDL::open() {
	this->$DirectAudioDevice$DirectDL::open();
}

void DirectAudioDevice$DirectSDL::close() {
	this->$DirectAudioDevice$DirectDL::close();
}

$Line$Info* DirectAudioDevice$DirectSDL::getLineInfo() {
	 return this->$DirectAudioDevice$DirectDL::getLineInfo();
}

bool DirectAudioDevice$DirectSDL::isOpen() {
	 return this->$DirectAudioDevice$DirectDL::isOpen();
}

void DirectAudioDevice$DirectSDL::addLineListener($LineListener* listener) {
	this->$DirectAudioDevice$DirectDL::addLineListener(listener);
}

void DirectAudioDevice$DirectSDL::removeLineListener($LineListener* listener) {
	this->$DirectAudioDevice$DirectDL::removeLineListener(listener);
}

$ControlArray* DirectAudioDevice$DirectSDL::getControls() {
	 return this->$DirectAudioDevice$DirectDL::getControls();
}

bool DirectAudioDevice$DirectSDL::isControlSupported($Control$Type* controlType) {
	 return this->$DirectAudioDevice$DirectDL::isControlSupported(controlType);
}

$Control* DirectAudioDevice$DirectSDL::getControl($Control$Type* controlType) {
	 return this->$DirectAudioDevice$DirectDL::getControl(controlType);
}

int32_t DirectAudioDevice$DirectSDL::getFramePosition() {
	 return this->$DirectAudioDevice$DirectDL::getFramePosition();
}

int32_t DirectAudioDevice$DirectSDL::hashCode() {
	 return this->$DirectAudioDevice$DirectDL::hashCode();
}

bool DirectAudioDevice$DirectSDL::equals(Object$* arg0) {
	 return this->$DirectAudioDevice$DirectDL::equals(arg0);
}

$Object* DirectAudioDevice$DirectSDL::clone() {
	 return this->$DirectAudioDevice$DirectDL::clone();
}

$String* DirectAudioDevice$DirectSDL::toString() {
	 return this->$DirectAudioDevice$DirectDL::toString();
}

void DirectAudioDevice$DirectSDL::finalize() {
	this->$DirectAudioDevice$DirectDL::finalize();
}

void DirectAudioDevice$DirectSDL::init$($DataLine$Info* info, $AudioFormat* format, int32_t bufferSize, $DirectAudioDevice* mixer) {
	$var($DataLine$Info, var$0, info);
	$var($DirectAudioDevice, var$1, mixer);
	$var($AudioFormat, var$2, format);
	int32_t var$3 = bufferSize;
	int32_t var$4 = $nc(mixer)->getMixerIndex();
	$DirectAudioDevice$DirectDL::init$(var$0, var$1, var$2, var$3, var$4, mixer->getDeviceID(), true);
}

DirectAudioDevice$DirectSDL::DirectAudioDevice$DirectSDL() {
}

$Class* DirectAudioDevice$DirectSDL::load$($String* name, bool initialize) {
	$loadClass(DirectAudioDevice$DirectSDL, name, initialize, &_DirectAudioDevice$DirectSDL_ClassInfo_, allocate$DirectAudioDevice$DirectSDL);
	return class$;
}

$Class* DirectAudioDevice$DirectSDL::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com