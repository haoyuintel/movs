# movs
Inline assembly for researching the memory copy with using MOVS and MOV.
An experiment has been done for testing the time consuming with different length of string. The results are shown as following:
<table class="MsoNormalTable" border="1" cellspacing="0" cellpadding="0" title="" summary="" style="border-collapse:collapse;border:none;mso-border-alt:solid #A3A3A3 1.0pt;
 mso-yfti-tbllook:1184;mso-padding-alt:0in 0in 0in 0in">
 <tbody><tr style="mso-yfti-irow:0;mso-yfti-firstrow:yes">
  <td width="74" valign="top" style="width:55.3pt;border:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">Length<o:p></o:p></span></p>
  </td>
  <td width="130" valign="top" style="width:97.35pt;border:solid #A3A3A3 1.0pt;
  border-left:none;mso-border-left-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">MOVS
  Time(s)<o:p></o:p></span></p>
  </td>
  <td width="113" valign="top" style="width:84.9pt;border:solid #A3A3A3 1.0pt;
  border-left:none;mso-border-left-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">MOV
  Time(s)<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:1">
  <td width="72" valign="top" style="width:53.85pt;border:solid #A3A3A3 1.0pt;
  border-top:none;mso-border-top-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">1<o:p></o:p></span></p>
  </td>
  <td width="128" valign="top" style="width:96.0pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.014546<o:p></o:p></span></p>
  </td>
  <td width="103" valign="top" style="width:77.4pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.007429<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:2">
  <td width="72" valign="top" style="width:53.85pt;border:solid #A3A3A3 1.0pt;
  border-top:none;mso-border-top-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">2<o:p></o:p></span></p>
  </td>
  <td width="128" valign="top" style="width:96.0pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.019244<o:p></o:p></span></p>
  </td>
  <td width="103" valign="top" style="width:77.4pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.008607<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:3">
  <td width="72" valign="top" style="width:53.85pt;border:solid #A3A3A3 1.0pt;
  border-top:none;mso-border-top-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">3<o:p></o:p></span></p>
  </td>
  <td width="128" valign="top" style="width:96.0pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.024904<o:p></o:p></span></p>
  </td>
  <td width="103" valign="top" style="width:77.4pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.009427<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:4">
  <td width="72" valign="top" style="width:53.85pt;border:solid #A3A3A3 1.0pt;
  border-top:none;mso-border-top-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">4<o:p></o:p></span></p>
  </td>
  <td width="128" valign="top" style="width:96.0pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.029505<o:p></o:p></span></p>
  </td>
  <td width="103" valign="top" style="width:77.4pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.013607<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:5">
  <td width="72" valign="top" style="width:53.85pt;border:solid #A3A3A3 1.0pt;
  border-top:none;mso-border-top-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">5<o:p></o:p></span></p>
  </td>
  <td width="128" valign="top" style="width:96.0pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.035196<o:p></o:p></span></p>
  </td>
  <td width="103" valign="top" style="width:77.4pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.014640<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:6">
  <td width="72" valign="top" style="width:53.85pt;border:solid #A3A3A3 1.0pt;
  border-top:none;mso-border-top-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">6<o:p></o:p></span></p>
  </td>
  <td width="128" valign="top" style="width:96.0pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.041024<o:p></o:p></span></p>
  </td>
  <td width="103" valign="top" style="width:77.4pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.016543<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:7">
  <td width="72" valign="top" style="width:53.85pt;border:solid #A3A3A3 1.0pt;
  border-top:none;mso-border-top-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">7<o:p></o:p></span></p>
  </td>
  <td width="128" valign="top" style="width:96.0pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.045464<o:p></o:p></span></p>
  </td>
  <td width="103" valign="top" style="width:77.4pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.016734<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:8">
  <td width="72" valign="top" style="width:53.85pt;border:solid #A3A3A3 1.0pt;
  border-top:none;mso-border-top-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">8<o:p></o:p></span></p>
  </td>
  <td width="128" valign="top" style="width:96.0pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.050295<o:p></o:p></span></p>
  </td>
  <td width="103" valign="top" style="width:77.4pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.018422<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:9">
  <td width="72" valign="top" style="width:53.85pt;border:solid #A3A3A3 1.0pt;
  border-top:none;mso-border-top-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">9<o:p></o:p></span></p>
  </td>
  <td width="128" valign="top" style="width:96.0pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.055048<o:p></o:p></span></p>
  </td>
  <td width="103" valign="top" style="width:77.4pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.014811<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:10">
  <td width="72" valign="top" style="width:53.85pt;border:solid #A3A3A3 1.0pt;
  border-top:none;mso-border-top-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">10<o:p></o:p></span></p>
  </td>
  <td width="128" valign="top" style="width:96.0pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.061195<o:p></o:p></span></p>
  </td>
  <td width="103" valign="top" style="width:77.4pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.016027<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:11">
  <td width="72" valign="top" style="width:53.85pt;border:solid #A3A3A3 1.0pt;
  border-top:none;mso-border-top-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">20<o:p></o:p></span></p>
  </td>
  <td width="128" valign="top" style="width:96.0pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.111267<o:p></o:p></span></p>
  </td>
  <td width="103" valign="top" style="width:77.4pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.026331<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:12">
  <td width="72" valign="top" style="width:53.85pt;border:solid #A3A3A3 1.0pt;
  border-top:none;mso-border-top-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">29<o:p></o:p></span></p>
  </td>
  <td width="128" valign="top" style="width:96.0pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.157409<o:p></o:p></span></p>
  </td>
  <td width="103" valign="top" style="width:77.4pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.067565<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:13">
  <td width="72" valign="top" style="width:53.85pt;border:solid #A3A3A3 1.0pt;
  border-top:none;mso-border-top-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">53<o:p></o:p></span></p>
  </td>
  <td width="128" valign="top" style="width:96.0pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.282371<o:p></o:p></span></p>
  </td>
  <td width="103" valign="top" style="width:77.4pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.104147<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:14">
  <td width="72" valign="top" style="width:53.85pt;border:solid #A3A3A3 1.0pt;
  border-top:none;mso-border-top-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">113<o:p></o:p></span></p>
  </td>
  <td width="128" valign="top" style="width:96.0pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.589140<o:p></o:p></span></p>
  </td>
  <td width="103" valign="top" style="width:77.4pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.186573<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:15;mso-yfti-lastrow:yes">
  <td width="72" valign="top" style="width:53.85pt;border:solid #A3A3A3 1.0pt;
  border-top:none;mso-border-top-alt:solid #A3A3A3 1.0pt;padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">236<o:p></o:p></span></p>
  </td>
  <td width="128" valign="top" style="width:96.0pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">1.247340<o:p></o:p></span></p>
  </td>
  <td width="103" valign="top" style="width:77.4pt;border-top:none;border-left:
  none;border-bottom:solid #A3A3A3 1.0pt;border-right:solid #A3A3A3 1.0pt;
  mso-border-top-alt:solid #A3A3A3 1.0pt;mso-border-left-alt:solid #A3A3A3 1.0pt;
  padding:4.0pt 4.0pt 4.0pt 4.0pt">
  <p class="MsoNormal" style="margin-bottom:0in;line-height:normal"><span style="font-size:12.0pt;mso-ascii-font-family:Calibri;mso-fareast-font-family:
  &quot;Times New Roman&quot;;mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri">0.360234<o:p></o:p></span></p>
  </td>
 </tr>
</tbody></table>

![image](https://user-images.githubusercontent.com/91602480/155269030-4a3308ea-145a-49f5-99af-9218b8c6a0f8.png)
