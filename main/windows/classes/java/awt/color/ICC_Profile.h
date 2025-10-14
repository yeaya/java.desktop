#ifndef _java_awt_color_ICC_Profile_h_
#define _java_awt_color_ICC_Profile_h_
//$ class java.awt.color.ICC_Profile
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("CLASS_ABSTRACT")
#undef CLASS_ABSTRACT
#pragma push_macro("CLASS_COLORSPACECONVERSION")
#undef CLASS_COLORSPACECONVERSION
#pragma push_macro("CLASS_DEVICELINK")
#undef CLASS_DEVICELINK
#pragma push_macro("CLASS_DISPLAY")
#undef CLASS_DISPLAY
#pragma push_macro("CLASS_INPUT")
#undef CLASS_INPUT
#pragma push_macro("CLASS_NAMEDCOLOR")
#undef CLASS_NAMEDCOLOR
#pragma push_macro("CLASS_OUTPUT")
#undef CLASS_OUTPUT

namespace java {
	namespace io {
		class File;
		class InputStream;
		class ObjectInputStream;
		class ObjectOutputStream;
		class OutputStream;
	}
}
namespace sun {
	namespace java2d {
		namespace cmm {
			class Profile;
			class ProfileDeferralInfo;
		}
	}
}

namespace java {
	namespace awt {
		namespace color {

class $export ICC_Profile : public ::java::io::Serializable {
	$class(ICC_Profile, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::io::Serializable)
public:
	ICC_Profile();
	void init$(::sun::java2d::cmm::Profile* p);
	void init$(::sun::java2d::cmm::ProfileDeferralInfo* pdi);
	::sun::java2d::cmm::Profile* cmmProfile();
	virtual void finalize() override;
	virtual int32_t getColorSpaceType();
	static int32_t getColorSpaceType(::sun::java2d::cmm::Profile* p);
	virtual $bytes* getData();
	virtual $bytes* getData(int32_t tagSignature);
	static $bytes* getData(::sun::java2d::cmm::Profile* p, int32_t tagSignature);
	virtual float getGamma(int32_t tagSignature);
	static ::java::awt::color::ICC_Profile* getInstance($bytes* data);
	static ::java::awt::color::ICC_Profile* getInstance(int32_t cspace);
	static ::java::awt::color::ICC_Profile* getInstance($String* fileName);
	static ::java::awt::color::ICC_Profile* getInstance(::java::io::InputStream* s);
	virtual int32_t getMajorVersion();
	virtual $floats* getMediaWhitePoint();
	virtual int32_t getMinorVersion();
	virtual int32_t getNumComponents();
	virtual int32_t getPCSType();
	virtual int32_t getProfileClass();
	static $bytes* getProfileDataFromStream(::java::io::InputStream* s);
	static ::java::io::File* getProfileFile($String* fileName);
	static ::java::io::InputStream* getStandardProfileInputStream($String* fileName);
	virtual $shorts* getTRC(int32_t tagSignature);
	$floats* getXYZTag(int32_t tagSignature);
	static int32_t iccCStoJCS(int32_t theColorSpaceSig);
	static int32_t intFromBigEndian($bytes* array, int32_t index);
	static bool isChildOf(::java::io::File* f, $String* dirName);
	static ::java::io::InputStream* lambda$getStandardProfileInputStream$0($String* fileName);
	void readObject(::java::io::ObjectInputStream* s);
	virtual $Object* readResolve();
	virtual void setData(int32_t tagSignature, $bytes* tagData);
	static int16_t shortFromBigEndian($bytes* array, int32_t index);
	virtual void write($String* fileName);
	virtual void write(::java::io::OutputStream* s);
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0xC95794B0CFC9EF42;
	$volatile(::sun::java2d::cmm::Profile*) cmmProfile$ = nullptr;
	$volatile(::sun::java2d::cmm::ProfileDeferralInfo*) deferralInfo = nullptr;
	static const int32_t CLASS_INPUT = 0;
	static const int32_t CLASS_DISPLAY = 1;
	static const int32_t CLASS_OUTPUT = 2;
	static const int32_t CLASS_DEVICELINK = 3;
	static const int32_t CLASS_COLORSPACECONVERSION = 4;
	static const int32_t CLASS_ABSTRACT = 5;
	static const int32_t CLASS_NAMEDCOLOR = 6;
	static const int32_t icSigXYZData = 0x58595A20;
	static const int32_t icSigLabData = 0x4C616220;
	static const int32_t icSigLuvData = 0x4C757620;
	static const int32_t icSigYCbCrData = 0x59436272;
	static const int32_t icSigYxyData = 0x59787920;
	static const int32_t icSigRgbData = 0x52474220;
	static const int32_t icSigGrayData = 0x47524159;
	static const int32_t icSigHsvData = 0x48535620;
	static const int32_t icSigHlsData = 0x484C5320;
	static const int32_t icSigCmykData = 0x434D594B;
	static const int32_t icSigCmyData = 0x434D5920;
	static const int32_t icSigSpace2CLR = 0x32434C52;
	static const int32_t icSigSpace3CLR = 0x33434C52;
	static const int32_t icSigSpace4CLR = 0x34434C52;
	static const int32_t icSigSpace5CLR = 0x35434C52;
	static const int32_t icSigSpace6CLR = 0x36434C52;
	static const int32_t icSigSpace7CLR = 0x37434C52;
	static const int32_t icSigSpace8CLR = 0x38434C52;
	static const int32_t icSigSpace9CLR = 0x39434C52;
	static const int32_t icSigSpaceACLR = 0x41434C52;
	static const int32_t icSigSpaceBCLR = 0x42434C52;
	static const int32_t icSigSpaceCCLR = 0x43434C52;
	static const int32_t icSigSpaceDCLR = 0x44434C52;
	static const int32_t icSigSpaceECLR = 0x45434C52;
	static const int32_t icSigSpaceFCLR = 0x46434C52;
	static const int32_t icSigInputClass = 0x73636E72;
	static const int32_t icSigDisplayClass = 0x6D6E7472;
	static const int32_t icSigOutputClass = 0x70727472;
	static const int32_t icSigLinkClass = 0x6C696E6B;
	static const int32_t icSigAbstractClass = 0x61627374;
	static const int32_t icSigColorSpaceClass = 0x73706163;
	static const int32_t icSigNamedColorClass = 0x6E6D636C;
	static const int32_t icPerceptual = 0;
	static const int32_t icRelativeColorimetric = 1;
	static const int32_t icMediaRelativeColorimetric = 1;
	static const int32_t icSaturation = 2;
	static const int32_t icAbsoluteColorimetric = 3;
	static const int32_t icICCAbsoluteColorimetric = 3;
	static const int32_t icSigHead = 0x68656164;
	static const int32_t icSigAToB0Tag = 0x41324230;
	static const int32_t icSigAToB1Tag = 0x41324231;
	static const int32_t icSigAToB2Tag = 0x41324232;
	static const int32_t icSigBlueColorantTag = 0x6258595A;
	static const int32_t icSigBlueMatrixColumnTag = 0x6258595A;
	static const int32_t icSigBlueTRCTag = 0x62545243;
	static const int32_t icSigBToA0Tag = 0x42324130;
	static const int32_t icSigBToA1Tag = 0x42324131;
	static const int32_t icSigBToA2Tag = 0x42324132;
	static const int32_t icSigCalibrationDateTimeTag = 0x63616C74;
	static const int32_t icSigCharTargetTag = 0x74617267;
	static const int32_t icSigCopyrightTag = 0x63707274;
	static const int32_t icSigCrdInfoTag = 0x63726469;
	static const int32_t icSigDeviceMfgDescTag = 0x646D6E64;
	static const int32_t icSigDeviceModelDescTag = 0x646D6464;
	static const int32_t icSigDeviceSettingsTag = 0x64657673;
	static const int32_t icSigGamutTag = 0x67616D74;
	static const int32_t icSigGrayTRCTag = 0x6B545243;
	static const int32_t icSigGreenColorantTag = 0x6758595A;
	static const int32_t icSigGreenMatrixColumnTag = 0x6758595A;
	static const int32_t icSigGreenTRCTag = 0x67545243;
	static const int32_t icSigLuminanceTag = 0x6C756D69;
	static const int32_t icSigMeasurementTag = 0x6D656173;
	static const int32_t icSigMediaBlackPointTag = 0x626B7074;
	static const int32_t icSigMediaWhitePointTag = 0x77747074;
	static const int32_t icSigNamedColor2Tag = 0x6E636C32;
	static const int32_t icSigOutputResponseTag = 0x72657370;
	static const int32_t icSigPreview0Tag = 0x70726530;
	static const int32_t icSigPreview1Tag = 0x70726531;
	static const int32_t icSigPreview2Tag = 0x70726532;
	static const int32_t icSigProfileDescriptionTag = 0x64657363;
	static const int32_t icSigProfileSequenceDescTag = 0x70736571;
	static const int32_t icSigPs2CRD0Tag = 0x70736430;
	static const int32_t icSigPs2CRD1Tag = 0x70736431;
	static const int32_t icSigPs2CRD2Tag = 0x70736432;
	static const int32_t icSigPs2CRD3Tag = 0x70736433;
	static const int32_t icSigPs2CSATag = 0x70733273;
	static const int32_t icSigPs2RenderingIntentTag = 0x70733269;
	static const int32_t icSigRedColorantTag = 0x7258595A;
	static const int32_t icSigRedMatrixColumnTag = 0x7258595A;
	static const int32_t icSigRedTRCTag = 0x72545243;
	static const int32_t icSigScreeningDescTag = 0x73637264;
	static const int32_t icSigScreeningTag = 0x7363726E;
	static const int32_t icSigTechnologyTag = 0x74656368;
	static const int32_t icSigUcrBgTag = 0x62666420;
	static const int32_t icSigViewingCondDescTag = 0x76756564;
	static const int32_t icSigViewingConditionsTag = 0x76696577;
	static const int32_t icSigChromaticityTag = 0x6368726D;
	static const int32_t icSigChromaticAdaptationTag = 0x63686164;
	static const int32_t icSigColorantOrderTag = 0x636C726F;
	static const int32_t icSigColorantTableTag = 0x636C7274;
	static const int32_t icHdrSize = 0;
	static const int32_t icHdrCmmId = 4;
	static const int32_t icHdrVersion = 8;
	static const int32_t icHdrDeviceClass = 12;
	static const int32_t icHdrColorSpace = 16;
	static const int32_t icHdrPcs = 20;
	static const int32_t icHdrDate = 24;
	static const int32_t icHdrMagic = 36;
	static const int32_t icHdrPlatform = 40;
	static const int32_t icHdrFlags = 44;
	static const int32_t icHdrManufacturer = 48;
	static const int32_t icHdrModel = 52;
	static const int32_t icHdrAttributes = 56;
	static const int32_t icHdrRenderingIntent = 64;
	static const int32_t icHdrIlluminant = 68;
	static const int32_t icHdrCreator = 80;
	static const int32_t icHdrProfileID = 84;
	static const int32_t icTagType = 0;
	static const int32_t icTagReserved = 4;
	static const int32_t icCurveCount = 8;
	static const int32_t icCurveData = 12;
	static const int32_t icXYZNumberX = 8;
	int32_t iccProfileSerializedDataVersion = 0;
	::java::awt::color::ICC_Profile* resolvedDeserializedProfile = nullptr;
};

		} // color
	} // awt
} // java

#pragma pop_macro("CLASS_ABSTRACT")
#pragma pop_macro("CLASS_COLORSPACECONVERSION")
#pragma pop_macro("CLASS_DEVICELINK")
#pragma pop_macro("CLASS_DISPLAY")
#pragma pop_macro("CLASS_INPUT")
#pragma pop_macro("CLASS_NAMEDCOLOR")
#pragma pop_macro("CLASS_OUTPUT")

#endif // _java_awt_color_ICC_Profile_h_