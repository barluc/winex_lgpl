package opengl32;

use strict;

require Exporter;

use wine;
use vars qw(@ISA @EXPORT @EXPORT_OK);

@ISA = qw(Exporter);
@EXPORT = qw();
@EXPORT_OK = qw();

my $module_declarations = {
    "glAccum" => ["void",  ["long", "long"]],
    "glActiveTextureARB" => ["void",  ["long"]],
    "glAlphaFunc" => ["void",  ["long", "long"]],
    "glAreTexturesResident" => ["long",  ["long", "ptr", "ptr"]],
    "glArrayElement" => ["void",  ["long"]],
    "glBegin" => ["void",  ["long"]],
    "glBindTexture" => ["void",  ["long", "long"]],
    "glBitmap" => ["void",  ["long", "long", "long", "long", "long", "long", "ptr"]],
    "glBlendColor" => ["void",  ["long", "long", "long", "long"]],
    "glBlendEquation" => ["void",  ["long"]],
    "glBlendFunc" => ["void",  ["long", "long"]],
    "glCallList" => ["void",  ["long"]],
    "glCallLists" => ["void",  ["long", "long", "ptr"]],
    "glClear" => ["void",  ["long"]],
    "glClearAccum" => ["void",  ["long", "long", "long", "long"]],
    "glClearColor" => ["void",  ["long", "long", "long", "long"]],
    "glClearDepth" => ["void",  ["double"]],
    "glClearIndex" => ["void",  ["long"]],
    "glClearStencil" => ["void",  ["long"]],
    "glClientActiveTextureARB" => ["void",  ["long"]],
    "glClipPlane" => ["void",  ["long", "ptr"]],
    "glColor3b" => ["void",  ["long", "long", "long"]],
    "glColor3bv" => ["void",  ["ptr"]],
    "glColor3d" => ["void",  ["double", "double", "double"]],
    "glColor3dv" => ["void",  ["ptr"]],
    "glColor3f" => ["void",  ["long", "long", "long"]],
    "glColor3fv" => ["void",  ["ptr"]],
    "glColor3i" => ["void",  ["long", "long", "long"]],
    "glColor3iv" => ["void",  ["ptr"]],
    "glColor3s" => ["void",  ["long", "long", "long"]],
    "glColor3sv" => ["void",  ["ptr"]],
    "glColor3ub" => ["void",  ["long", "long", "long"]],
    "glColor3ubv" => ["void",  ["ptr"]],
    "glColor3ui" => ["void",  ["long", "long", "long"]],
    "glColor3uiv" => ["void",  ["ptr"]],
    "glColor3us" => ["void",  ["long", "long", "long"]],
    "glColor3usv" => ["void",  ["ptr"]],
    "glColor4b" => ["void",  ["long", "long", "long", "long"]],
    "glColor4bv" => ["void",  ["ptr"]],
    "glColor4d" => ["void",  ["double", "double", "double", "double"]],
    "glColor4dv" => ["void",  ["ptr"]],
    "glColor4f" => ["void",  ["long", "long", "long", "long"]],
    "glColor4fv" => ["void",  ["ptr"]],
    "glColor4i" => ["void",  ["long", "long", "long", "long"]],
    "glColor4iv" => ["void",  ["ptr"]],
    "glColor4s" => ["void",  ["long", "long", "long", "long"]],
    "glColor4sv" => ["void",  ["ptr"]],
    "glColor4ub" => ["void",  ["long", "long", "long", "long"]],
    "glColor4ubv" => ["void",  ["ptr"]],
    "glColor4ui" => ["void",  ["long", "long", "long", "long"]],
    "glColor4uiv" => ["void",  ["ptr"]],
    "glColor4us" => ["void",  ["long", "long", "long", "long"]],
    "glColor4usv" => ["void",  ["ptr"]],
    "glColorMask" => ["void",  ["long", "long", "long", "long"]],
    "glColorMaterial" => ["void",  ["long", "long"]],
    "glColorPointer" => ["void",  ["long", "long", "long", "ptr"]],
    "glColorSubTable" => ["void",  ["long", "long", "long", "long", "long", "ptr"]],
    "glColorTable" => ["void",  ["long", "long", "long", "long", "long", "ptr"]],
    "glColorTableParameterfv" => ["void",  ["long", "long", "ptr"]],
    "glColorTableParameteriv" => ["void",  ["long", "long", "ptr"]],
    "glConvolutionFilter1D" => ["void",  ["long", "long", "long", "long", "long", "ptr"]],
    "glConvolutionFilter2D" => ["void",  ["long", "long", "long", "long", "long", "long", "ptr"]],
    "glConvolutionParameterf" => ["void",  ["long", "long", "long"]],
    "glConvolutionParameterfv" => ["void",  ["long", "long", "ptr"]],
    "glConvolutionParameteri" => ["void",  ["long", "long", "long"]],
    "glConvolutionParameteriv" => ["void",  ["long", "long", "ptr"]],
    "glCopyColorSubTable" => ["void",  ["long", "long", "long", "long", "long"]],
    "glCopyColorTable" => ["void",  ["long", "long", "long", "long", "long"]],
    "glCopyConvolutionFilter1D" => ["void",  ["long", "long", "long", "long", "long"]],
    "glCopyConvolutionFilter2D" => ["void",  ["long", "long", "long", "long", "long", "long"]],
    "glCopyPixels" => ["void",  ["long", "long", "long", "long", "long"]],
    "glCopyTexImage1D" => ["void",  ["long", "long", "long", "long", "long", "long", "long"]],
    "glCopyTexImage2D" => ["void",  ["long", "long", "long", "long", "long", "long", "long", "long"]],
    "glCopyTexSubImage1D" => ["void",  ["long", "long", "long", "long", "long", "long"]],
    "glCopyTexSubImage2D" => ["void",  ["long", "long", "long", "long", "long", "long", "long", "long"]],
    "glCopyTexSubImage3D" => ["void",  ["long", "long", "long", "long", "long", "long", "long", "long", "long"]],
    "glCullFace" => ["void",  ["long"]],
    "glDeleteLists" => ["void",  ["long", "long"]],
    "glDeleteTextures" => ["void",  ["long", "ptr"]],
    "glDepthFunc" => ["void",  ["long"]],
    "glDepthMask" => ["void",  ["long"]],
    "glDepthRange" => ["void",  ["double", "double"]],
    "glDisable" => ["void",  ["long"]],
    "glDisableClientState" => ["void",  ["long"]],
    "glDrawArrays" => ["void",  ["long", "long", "long"]],
    "glDrawBuffer" => ["void",  ["long"]],
    "glDrawElements" => ["void",  ["long", "long", "long", "ptr"]],
    "glDrawPixels" => ["void",  ["long", "long", "long", "long", "ptr"]],
    "glDrawRangeElements" => ["void",  ["long", "long", "long", "long", "long", "ptr"]],
    "glEdgeFlag" => ["void",  ["long"]],
    "glEdgeFlagPointer" => ["void",  ["long", "ptr"]],
    "glEdgeFlagv" => ["void",  ["ptr"]],
    "glEnable" => ["void",  ["long"]],
    "glEnableClientState" => ["void",  ["long"]],
    "glEnd" => ["void",  ["undef"]],
    "glEndList" => ["void",  ["undef"]],
    "glEvalCoord1d" => ["void",  ["double"]],
    "glEvalCoord1dv" => ["void",  ["ptr"]],
    "glEvalCoord1f" => ["void",  ["long"]],
    "glEvalCoord1fv" => ["void",  ["ptr"]],
    "glEvalCoord2d" => ["void",  ["double", "double"]],
    "glEvalCoord2dv" => ["void",  ["ptr"]],
    "glEvalCoord2f" => ["void",  ["long", "long"]],
    "glEvalCoord2fv" => ["void",  ["ptr"]],
    "glEvalMesh1" => ["void",  ["long", "long", "long"]],
    "glEvalMesh2" => ["void",  ["long", "long", "long", "long", "long"]],
    "glEvalPoint1" => ["void",  ["long"]],
    "glEvalPoint2" => ["void",  ["long", "long"]],
    "glFeedbackBuffer" => ["void",  ["long", "long", "ptr"]],
    "glFinish" => ["void",  ["undef"]],
    "glFlush" => ["void",  ["undef"]],
    "glFogf" => ["void",  ["long", "long"]],
    "glFogfv" => ["void",  ["long", "ptr"]],
    "glFogi" => ["void",  ["long", "long"]],
    "glFogiv" => ["void",  ["long", "ptr"]],
    "glFrontFace" => ["void",  ["long"]],
    "glFrustum" => ["void",  ["double", "double", "double", "double", "double", "double"]],
    "glGenLists" => ["long",  ["long"]],
    "glGenTextures" => ["void",  ["long", "ptr"]],
    "glGetBooleanv" => ["void",  ["long", "ptr"]],
    "glGetClipPlane" => ["void",  ["long", "ptr"]],
    "glGetColorTable" => ["void",  ["long", "long", "long", "ptr"]],
    "glGetColorTableParameterfv" => ["void",  ["long", "long", "ptr"]],
    "glGetColorTableParameteriv" => ["void",  ["long", "long", "ptr"]],
    "glGetConvolutionFilter" => ["void",  ["long", "long", "long", "ptr"]],
    "glGetConvolutionParameterfv" => ["void",  ["long", "long", "ptr"]],
    "glGetConvolutionParameteriv" => ["void",  ["long", "long", "ptr"]],
    "glGetDoublev" => ["void",  ["long", "ptr"]],
    "glGetError" => ["long",  ["undef"]],
    "glGetFloatv" => ["void",  ["long", "ptr"]],
    "glGetHistogram" => ["void",  ["long", "long", "long", "long", "ptr"]],
    "glGetHistogramParameterfv" => ["void",  ["long", "long", "ptr"]],
    "glGetHistogramParameteriv" => ["void",  ["long", "long", "ptr"]],
    "glGetIntegerv" => ["void",  ["long", "ptr"]],
    "glGetLightfv" => ["void",  ["long", "long", "ptr"]],
    "glGetLightiv" => ["void",  ["long", "long", "ptr"]],
    "glGetMapdv" => ["void",  ["long", "long", "ptr"]],
    "glGetMapfv" => ["void",  ["long", "long", "ptr"]],
    "glGetMapiv" => ["void",  ["long", "long", "ptr"]],
    "glGetMaterialfv" => ["void",  ["long", "long", "ptr"]],
    "glGetMaterialiv" => ["void",  ["long", "long", "ptr"]],
    "glGetMinmax" => ["void",  ["long", "long", "long", "long", "ptr"]],
    "glGetMinmaxParameterfv" => ["void",  ["long", "long", "ptr"]],
    "glGetMinmaxParameteriv" => ["void",  ["long", "long", "ptr"]],
    "glGetPixelMapfv" => ["void",  ["long", "ptr"]],
    "glGetPixelMapuiv" => ["void",  ["long", "ptr"]],
    "glGetPixelMapusv" => ["void",  ["long", "ptr"]],
    "glGetPointerv" => ["void",  ["long", "ptr"]],
    "glGetPolygonStipple" => ["void",  ["ptr"]],
    "glGetSeparableFilter" => ["void",  ["long", "long", "long", "ptr", "ptr", "ptr"]],
    "glGetString" => ["ptr",  ["long"]],
    "glGetTexEnvfv" => ["void",  ["long", "long", "ptr"]],
    "glGetTexEnviv" => ["void",  ["long", "long", "ptr"]],
    "glGetTexGendv" => ["void",  ["long", "long", "ptr"]],
    "glGetTexGenfv" => ["void",  ["long", "long", "ptr"]],
    "glGetTexGeniv" => ["void",  ["long", "long", "ptr"]],
    "glGetTexImage" => ["void",  ["long", "long", "long", "long", "ptr"]],
    "glGetTexLevelParameterfv" => ["void",  ["long", "long", "long", "ptr"]],
    "glGetTexLevelParameteriv" => ["void",  ["long", "long", "long", "ptr"]],
    "glGetTexParameterfv" => ["void",  ["long", "long", "ptr"]],
    "glGetTexParameteriv" => ["void",  ["long", "long", "ptr"]],
    "glHint" => ["void",  ["long", "long"]],
    "glHistogram" => ["void",  ["long", "long", "long", "long"]],
    "glIndexMask" => ["void",  ["long"]],
    "glIndexPointer" => ["void",  ["long", "long", "ptr"]],
    "glIndexd" => ["void",  ["double"]],
    "glIndexdv" => ["void",  ["ptr"]],
    "glIndexf" => ["void",  ["long"]],
    "glIndexfv" => ["void",  ["ptr"]],
    "glIndexi" => ["void",  ["long"]],
    "glIndexiv" => ["void",  ["ptr"]],
    "glIndexs" => ["void",  ["long"]],
    "glIndexsv" => ["void",  ["ptr"]],
    "glIndexub" => ["void",  ["long"]],
    "glIndexubv" => ["void",  ["ptr"]],
    "glInitNames" => ["void",  ["undef"]],
    "glInterleavedArrays" => ["void",  ["long", "long", "ptr"]],
    "glIsEnabled" => ["long",  ["long"]],
    "glIsList" => ["long",  ["long"]],
    "glIsTexture" => ["long",  ["long"]],
    "glLightModelf" => ["void",  ["long", "long"]],
    "glLightModelfv" => ["void",  ["long", "ptr"]],
    "glLightModeli" => ["void",  ["long", "long"]],
    "glLightModeliv" => ["void",  ["long", "ptr"]],
    "glLightf" => ["void",  ["long", "long", "long"]],
    "glLightfv" => ["void",  ["long", "long", "ptr"]],
    "glLighti" => ["void",  ["long", "long", "long"]],
    "glLightiv" => ["void",  ["long", "long", "ptr"]],
    "glLineStipple" => ["void",  ["long", "long"]],
    "glLineWidth" => ["void",  ["long"]],
    "glListBase" => ["void",  ["long"]],
    "glLoadIdentity" => ["void",  ["undef"]],
    "glLoadMatrixd" => ["void",  ["ptr"]],
    "glLoadMatrixf" => ["void",  ["ptr"]],
    "glLoadName" => ["void",  ["long"]],
    "glLogicOp" => ["void",  ["long"]],
    "glMap1d" => ["void",  ["long", "double", "double", "long", "long", "ptr"]],
    "glMap1f" => ["void",  ["long", "long", "long", "long", "long", "ptr"]],
    "glMap2d" => ["void",  ["long", "double", "double", "long", "long", "double", "double", "long", "long", "ptr"]],
    "glMap2f" => ["void",  ["long", "long", "long", "long", "long", "long", "long", "long", "long", "ptr"]],
    "glMapGrid1d" => ["void",  ["long", "double", "double"]],
    "glMapGrid1f" => ["void",  ["long", "long", "long"]],
    "glMapGrid2d" => ["void",  ["long", "double", "double", "long", "double", "double"]],
    "glMapGrid2f" => ["void",  ["long", "long", "long", "long", "long", "long"]],
    "glMaterialf" => ["void",  ["long", "long", "long"]],
    "glMaterialfv" => ["void",  ["long", "long", "ptr"]],
    "glMateriali" => ["void",  ["long", "long", "long"]],
    "glMaterialiv" => ["void",  ["long", "long", "ptr"]],
    "glMatrixMode" => ["void",  ["long"]],
    "glMinmax" => ["void",  ["long", "long", "long"]],
    "glMultMatrixd" => ["void",  ["ptr"]],
    "glMultMatrixf" => ["void",  ["ptr"]],
    "glMultiTexCoord1dARB" => ["void",  ["long", "double"]],
    "glMultiTexCoord1dvARB" => ["void",  ["long", "ptr"]],
    "glMultiTexCoord1fARB" => ["void",  ["long", "long"]],
    "glMultiTexCoord1fvARB" => ["void",  ["long", "ptr"]],
    "glMultiTexCoord1iARB" => ["void",  ["long", "long"]],
    "glMultiTexCoord1ivARB" => ["void",  ["long", "ptr"]],
    "glMultiTexCoord1sARB" => ["void",  ["long", "long"]],
    "glMultiTexCoord1svARB" => ["void",  ["long", "ptr"]],
    "glMultiTexCoord2dARB" => ["void",  ["long", "double", "double"]],
    "glMultiTexCoord2dvARB" => ["void",  ["long", "ptr"]],
    "glMultiTexCoord2fARB" => ["void",  ["long", "long", "long"]],
    "glMultiTexCoord2fvARB" => ["void",  ["long", "ptr"]],
    "glMultiTexCoord2iARB" => ["void",  ["long", "long", "long"]],
    "glMultiTexCoord2ivARB" => ["void",  ["long", "ptr"]],
    "glMultiTexCoord2sARB" => ["void",  ["long", "long", "long"]],
    "glMultiTexCoord2svARB" => ["void",  ["long", "ptr"]],
    "glMultiTexCoord3dARB" => ["void",  ["long", "double", "double", "double"]],
    "glMultiTexCoord3dvARB" => ["void",  ["long", "ptr"]],
    "glMultiTexCoord3fARB" => ["void",  ["long", "long", "long", "long"]],
    "glMultiTexCoord3fvARB" => ["void",  ["long", "ptr"]],
    "glMultiTexCoord3iARB" => ["void",  ["long", "long", "long", "long"]],
    "glMultiTexCoord3ivARB" => ["void",  ["long", "ptr"]],
    "glMultiTexCoord3sARB" => ["void",  ["long", "long", "long", "long"]],
    "glMultiTexCoord3svARB" => ["void",  ["long", "ptr"]],
    "glMultiTexCoord4dARB" => ["void",  ["long", "double", "double", "double", "double"]],
    "glMultiTexCoord4dvARB" => ["void",  ["long", "ptr"]],
    "glMultiTexCoord4fARB" => ["void",  ["long", "long", "long", "long", "long"]],
    "glMultiTexCoord4fvARB" => ["void",  ["long", "ptr"]],
    "glMultiTexCoord4iARB" => ["void",  ["long", "long", "long", "long", "long"]],
    "glMultiTexCoord4ivARB" => ["void",  ["long", "ptr"]],
    "glMultiTexCoord4sARB" => ["void",  ["long", "long", "long", "long", "long"]],
    "glMultiTexCoord4svARB" => ["void",  ["long", "ptr"]],
    "glNewList" => ["void",  ["long", "long"]],
    "glNormal3b" => ["void",  ["long", "long", "long"]],
    "glNormal3bv" => ["void",  ["ptr"]],
    "glNormal3d" => ["void",  ["double", "double", "double"]],
    "glNormal3dv" => ["void",  ["ptr"]],
    "glNormal3f" => ["void",  ["long", "long", "long"]],
    "glNormal3fv" => ["void",  ["ptr"]],
    "glNormal3i" => ["void",  ["long", "long", "long"]],
    "glNormal3iv" => ["void",  ["ptr"]],
    "glNormal3s" => ["void",  ["long", "long", "long"]],
    "glNormal3sv" => ["void",  ["ptr"]],
    "glNormalPointer" => ["void",  ["long", "long", "ptr"]],
    "glOrtho" => ["void",  ["double", "double", "double", "double", "double", "double"]],
    "glPassThrough" => ["void",  ["long"]],
    "glPixelMapfv" => ["void",  ["long", "long", "ptr"]],
    "glPixelMapuiv" => ["void",  ["long", "long", "ptr"]],
    "glPixelMapusv" => ["void",  ["long", "long", "ptr"]],
    "glPixelStoref" => ["void",  ["long", "long"]],
    "glPixelStorei" => ["void",  ["long", "long"]],
    "glPixelTransferf" => ["void",  ["long", "long"]],
    "glPixelTransferi" => ["void",  ["long", "long"]],
    "glPixelZoom" => ["void",  ["long", "long"]],
    "glPointSize" => ["void",  ["long"]],
    "glPolygonMode" => ["void",  ["long", "long"]],
    "glPolygonOffset" => ["void",  ["long", "long"]],
    "glPolygonStipple" => ["void",  ["ptr"]],
    "glPopAttrib" => ["void",  ["undef"]],
    "glPopClientAttrib" => ["void",  ["undef"]],
    "glPopMatrix" => ["void",  ["undef"]],
    "glPopName" => ["void",  ["undef"]],
    "glPrioritizeTextures" => ["void",  ["long", "ptr", "ptr"]],
    "glPushAttrib" => ["void",  ["long"]],
    "glPushClientAttrib" => ["void",  ["long"]],
    "glPushMatrix" => ["void",  ["undef"]],
    "glPushName" => ["void",  ["long"]],
    "glRasterPos2d" => ["void",  ["double", "double"]],
    "glRasterPos2dv" => ["void",  ["ptr"]],
    "glRasterPos2f" => ["void",  ["long", "long"]],
    "glRasterPos2fv" => ["void",  ["ptr"]],
    "glRasterPos2i" => ["void",  ["long", "long"]],
    "glRasterPos2iv" => ["void",  ["ptr"]],
    "glRasterPos2s" => ["void",  ["long", "long"]],
    "glRasterPos2sv" => ["void",  ["ptr"]],
    "glRasterPos3d" => ["void",  ["double", "double", "double"]],
    "glRasterPos3dv" => ["void",  ["ptr"]],
    "glRasterPos3f" => ["void",  ["long", "long", "long"]],
    "glRasterPos3fv" => ["void",  ["ptr"]],
    "glRasterPos3i" => ["void",  ["long", "long", "long"]],
    "glRasterPos3iv" => ["void",  ["ptr"]],
    "glRasterPos3s" => ["void",  ["long", "long", "long"]],
    "glRasterPos3sv" => ["void",  ["ptr"]],
    "glRasterPos4d" => ["void",  ["double", "double", "double", "double"]],
    "glRasterPos4dv" => ["void",  ["ptr"]],
    "glRasterPos4f" => ["void",  ["long", "long", "long", "long"]],
    "glRasterPos4fv" => ["void",  ["ptr"]],
    "glRasterPos4i" => ["void",  ["long", "long", "long", "long"]],
    "glRasterPos4iv" => ["void",  ["ptr"]],
    "glRasterPos4s" => ["void",  ["long", "long", "long", "long"]],
    "glRasterPos4sv" => ["void",  ["ptr"]],
    "glReadBuffer" => ["void",  ["long"]],
    "glReadPixels" => ["void",  ["long", "long", "long", "long", "long", "long", "ptr"]],
    "glRectd" => ["void",  ["double", "double", "double", "double"]],
    "glRectdv" => ["void",  ["ptr", "ptr"]],
    "glRectf" => ["void",  ["long", "long", "long", "long"]],
    "glRectfv" => ["void",  ["ptr", "ptr"]],
    "glRecti" => ["void",  ["long", "long", "long", "long"]],
    "glRectiv" => ["void",  ["ptr", "ptr"]],
    "glRects" => ["void",  ["long", "long", "long", "long"]],
    "glRectsv" => ["void",  ["ptr", "ptr"]],
    "glRenderMode" => ["long",  ["long"]],
    "glResetHistogram" => ["void",  ["long"]],
    "glResetMinmax" => ["void",  ["long"]],
    "glRotated" => ["void",  ["double", "double", "double", "double"]],
    "glRotatef" => ["void",  ["long", "long", "long", "long"]],
    "glScaled" => ["void",  ["double", "double", "double"]],
    "glScalef" => ["void",  ["long", "long", "long"]],
    "glScissor" => ["void",  ["long", "long", "long", "long"]],
    "glSelectBuffer" => ["void",  ["long", "ptr"]],
    "glSeparableFilter2D" => ["void",  ["long", "long", "long", "long", "long", "long", "ptr", "ptr"]],
    "glShadeModel" => ["void",  ["long"]],
    "glStencilFunc" => ["void",  ["long", "long", "long"]],
    "glStencilMask" => ["void",  ["long"]],
    "glStencilOp" => ["void",  ["long", "long", "long"]],
    "glTexCoord1d" => ["void",  ["double"]],
    "glTexCoord1dv" => ["void",  ["ptr"]],
    "glTexCoord1f" => ["void",  ["long"]],
    "glTexCoord1fv" => ["void",  ["ptr"]],
    "glTexCoord1i" => ["void",  ["long"]],
    "glTexCoord1iv" => ["void",  ["ptr"]],
    "glTexCoord1s" => ["void",  ["long"]],
    "glTexCoord1sv" => ["void",  ["ptr"]],
    "glTexCoord2d" => ["void",  ["double", "double"]],
    "glTexCoord2dv" => ["void",  ["ptr"]],
    "glTexCoord2f" => ["void",  ["long", "long"]],
    "glTexCoord2fv" => ["void",  ["ptr"]],
    "glTexCoord2i" => ["void",  ["long", "long"]],
    "glTexCoord2iv" => ["void",  ["ptr"]],
    "glTexCoord2s" => ["void",  ["long", "long"]],
    "glTexCoord2sv" => ["void",  ["ptr"]],
    "glTexCoord3d" => ["void",  ["double", "double", "double"]],
    "glTexCoord3dv" => ["void",  ["ptr"]],
    "glTexCoord3f" => ["void",  ["long", "long", "long"]],
    "glTexCoord3fv" => ["void",  ["ptr"]],
    "glTexCoord3i" => ["void",  ["long", "long", "long"]],
    "glTexCoord3iv" => ["void",  ["ptr"]],
    "glTexCoord3s" => ["void",  ["long", "long", "long"]],
    "glTexCoord3sv" => ["void",  ["ptr"]],
    "glTexCoord4d" => ["void",  ["double", "double", "double", "double"]],
    "glTexCoord4dv" => ["void",  ["ptr"]],
    "glTexCoord4f" => ["void",  ["long", "long", "long", "long"]],
    "glTexCoord4fv" => ["void",  ["ptr"]],
    "glTexCoord4i" => ["void",  ["long", "long", "long", "long"]],
    "glTexCoord4iv" => ["void",  ["ptr"]],
    "glTexCoord4s" => ["void",  ["long", "long", "long", "long"]],
    "glTexCoord4sv" => ["void",  ["ptr"]],
    "glTexCoordPointer" => ["void",  ["long", "long", "long", "ptr"]],
    "glTexEnvf" => ["void",  ["long", "long", "long"]],
    "glTexEnvfv" => ["void",  ["long", "long", "ptr"]],
    "glTexEnvi" => ["void",  ["long", "long", "long"]],
    "glTexEnviv" => ["void",  ["long", "long", "ptr"]],
    "glTexGend" => ["void",  ["long", "long", "double"]],
    "glTexGendv" => ["void",  ["long", "long", "ptr"]],
    "glTexGenf" => ["void",  ["long", "long", "long"]],
    "glTexGenfv" => ["void",  ["long", "long", "ptr"]],
    "glTexGeni" => ["void",  ["long", "long", "long"]],
    "glTexGeniv" => ["void",  ["long", "long", "ptr"]],
    "glTexImage1D" => ["void",  ["long", "long", "long", "long", "long", "long", "long", "ptr"]],
    "glTexImage2D" => ["void",  ["long", "long", "long", "long", "long", "long", "long", "long", "ptr"]],
    "glTexImage3D" => ["void",  ["long", "long", "long", "long", "long", "long", "long", "long", "long", "ptr"]],
    "glTexParameterf" => ["void",  ["long", "long", "long"]],
    "glTexParameterfv" => ["void",  ["long", "long", "ptr"]],
    "glTexParameteri" => ["void",  ["long", "long", "long"]],
    "glTexParameteriv" => ["void",  ["long", "long", "ptr"]],
    "glTexSubImage1D" => ["void",  ["long", "long", "long", "long", "long", "long", "ptr"]],
    "glTexSubImage2D" => ["void",  ["long", "long", "long", "long", "long", "long", "long", "long", "ptr"]],
    "glTexSubImage3D" => ["void",  ["long", "long", "long", "long", "long", "long", "long", "long", "long", "long", "ptr"]],
    "glTranslated" => ["void",  ["double", "double", "double"]],
    "glTranslatef" => ["void",  ["long", "long", "long"]],
    "glVertex2d" => ["void",  ["double", "double"]],
    "glVertex2dv" => ["void",  ["ptr"]],
    "glVertex2f" => ["void",  ["long", "long"]],
    "glVertex2fv" => ["void",  ["ptr"]],
    "glVertex2i" => ["void",  ["long", "long"]],
    "glVertex2iv" => ["void",  ["ptr"]],
    "glVertex2s" => ["void",  ["long", "long"]],
    "glVertex2sv" => ["void",  ["ptr"]],
    "glVertex3d" => ["void",  ["double", "double", "double"]],
    "glVertex3dv" => ["void",  ["ptr"]],
    "glVertex3f" => ["void",  ["long", "long", "long"]],
    "glVertex3fv" => ["void",  ["ptr"]],
    "glVertex3i" => ["void",  ["long", "long", "long"]],
    "glVertex3iv" => ["void",  ["ptr"]],
    "glVertex3s" => ["void",  ["long", "long", "long"]],
    "glVertex3sv" => ["void",  ["ptr"]],
    "glVertex4d" => ["void",  ["double", "double", "double", "double"]],
    "glVertex4dv" => ["void",  ["ptr"]],
    "glVertex4f" => ["void",  ["long", "long", "long", "long"]],
    "glVertex4fv" => ["void",  ["ptr"]],
    "glVertex4i" => ["void",  ["long", "long", "long", "long"]],
    "glVertex4iv" => ["void",  ["ptr"]],
    "glVertex4s" => ["void",  ["long", "long", "long", "long"]],
    "glVertex4sv" => ["void",  ["ptr"]],
    "glVertexPointer" => ["void",  ["long", "long", "long", "ptr"]],
    "glViewport" => ["void",  ["long", "long", "long", "long"]],
    "wglCopyContext" => ["long",  ["long", "long", "long"]],
    "wglCreateContext" => ["long",  ["long"]],
    "wglCreateLayerContext" => ["long",  ["long", "long"]],
    "wglDeleteContext" => ["long",  ["long"]],
    "wglDescribeLayerPlane" => ["long",  ["long", "long", "long", "long", "ptr"]],
    "wglGetCurrentContext" => ["long",  []],
    "wglGetCurrentDC" => ["long",  []],
    "wglGetLayerPaletteEntries" => ["long",  ["long", "long", "long", "long", "ptr"]],
    "wglGetProcAddress" => ["ptr",  ["str"]],
    "wglMakeCurrent" => ["long",  ["long", "long"]],
    "wglRealizeLayerPalette" => ["long",  ["long", "long", "long"]],
    "wglSetLayerPaletteEntries" => ["long",  ["long", "long", "long", "long", "ptr"]],
    "wglShareLists" => ["long",  ["long", "long"]],
    "wglSwapLayerBuffers" => ["long",  ["long", "long"]],
    "wglUseFontBitmapsA" => ["long",  ["long", "long", "long", "long"]],
    "wglUseFontOutlinesA" => ["long",  ["long", "long", "long", "long", "long", "long", "long", "ptr"]]
};

&wine::declare("opengl32",%$module_declarations);
push @EXPORT, map { "&" . $_; } sort(keys(%$module_declarations));
1;