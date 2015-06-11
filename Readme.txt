********************
*Seteps to install:*
********************
1- After enabilig Features Module and installing all the     dependencies, enable the Assessment Capacity Mapping Module.
2- After enabling
	a) Set the site name to "Assessment Capacity Mapping".
	b) Disable the "Assessment Capacity Mapping" from Main 		   Menu.
	c) Set Default front page to "office-details".
	d) Install Bootstrap 7.x-3.0 theme (or any other), enable 	  	   it and set and set as default.
3- Add following terms to Office Type taxonomy 
	a) Head Office
	b) Sub Office
	c) Site Office
4- Import terms for Location Taxonomy. District Level locations with there Latitude and Longitude information are given at the end of this file. Terms are in csv format just copy and past to create a csv file to import.

5- Import content. First import JAR Organizations then Office Details. Sample csv data is attached.

*********************
*Locations CSV Data:*
*********************
ID,Name,Parent,Lat,Lng,wkt
0,Disputed Territory,,33.764565,76.586418,POINT(76.586418 33.764565)
1,Gilgit Baltistan,,35.789078,74.980789,POINT(74.980789 35.789078)
2,Khyber Pakhtunkhwa,,34.480957,72.090218,POINT(72.090218 34.480957)
3,Pakistan Jammu Kashmir,,33.91468,73.748985,POINT(73.748985 33.91468)
4,FATA,,32.492977,69.893211,POINT(69.893211 32.492977)
5,Federal Capital Territory,,33.660339,73.253456,POINT(73.253456 33.660339)
6,Punjab,,30.813965,72.14341,POINT(72.14341 30.813965)
7,Balochistan,,28.327166,65.893066,POINT(65.893066 28.327166)
8,Sindh,,26.02022,68.78038,POINT(68.78038 26.02022)
101,Astore,Gilgit Baltistan,35.1461,74.8835,POINT(74.8835 35.1461)
102,Skardu,Gilgit Baltistan,35.3832,75.6906,POINT(75.6906 35.3832)
103,Diamir,Gilgit Baltistan,35.5133,73.9878,POINT(73.9878 35.5133)
104,Ghanche,Gilgit Baltistan,35.2198,76.7993,POINT(76.7993 35.2198)
105,Ghizer,Gilgit Baltistan,36.2888,73.428,POINT(73.428 36.2888)
106,Gilgit,Gilgit Baltistan,35.9166,74.4224,POINT(74.4224 35.9166)
107,Hunza Nagar,Gilgit Baltistan,36.5196,75.0133,POINT(75.0133 36.5196)
201,Abbottabad,Khyber Pakhtunkhwa,34.1083,73.27,POINT(73.27 34.1083)
202,Bannu,Khyber Pakhtunkhwa,32.9374,70.6647,POINT(70.6647 32.9374)
203,Batagram,Khyber Pakhtunkhwa,34.7914,73.1227,POINT(73.1227 34.7914)
204,Buner,Khyber Pakhtunkhwa,34.4652,72.5178,POINT(72.5178 34.4652)
205,Charsadda,Khyber Pakhtunkhwa,34.2447,71.7174,POINT(71.7174 34.2447)
206,Chitral,Khyber Pakhtunkhwa,36.2255,72.2249,POINT(72.2249 36.2255)
207,Dera Ismail Khan,Khyber Pakhtunkhwa,31.87,70.699,POINT(70.699 31.87)
208,Hangu,Khyber Pakhtunkhwa,33.4307,70.8474,POINT(70.8474 33.4307)
209,Haripur,Khyber Pakhtunkhwa,34.005,72.8951,POINT(72.8951 34.005)
210,Karak,Khyber Pakhtunkhwa,33.1375,71.1092,POINT(71.1092 33.1375)
211,Kohat,Khyber Pakhtunkhwa,33.4305,71.5388,POINT(71.5388 33.4305)
212,Kohistan,Khyber Pakhtunkhwa,35.3266,73.2268,POINT(73.2268 35.3266)
213,Lakki Marwat,Khyber Pakhtunkhwa,32.5985,70.8337,POINT(70.8337 32.5985)
214,Lower Dir,Khyber Pakhtunkhwa,34.8448,71.8455,POINT(71.8455 34.8448)
215,Malakand P.a.,Khyber Pakhtunkhwa,34.5396,71.8955,POINT(71.8955 34.5396)
216,Mansehra,Khyber Pakhtunkhwa,34.6665,73.443,POINT(73.443 34.6665)
217,Mardan,Khyber Pakhtunkhwa,34.315,72.0979,POINT(72.0979 34.315)
218,Nowshera,Khyber Pakhtunkhwa,33.9284,71.9861,POINT(71.9861 33.9284)
219,Peshawar,Khyber Pakhtunkhwa,33.9683,71.571,POINT(71.571 33.9683)
220,Shangla,Khyber Pakhtunkhwa,34.8478,72.7304,POINT(72.7304 34.8478)
221,Swabi,Khyber Pakhtunkhwa,34.0831,72.4885,POINT(72.4885 34.0831)
222,Swat,Khyber Pakhtunkhwa,35.2507,72.4651,POINT(72.4651 35.2507)
229,Tank,Khyber Pakhtunkhwa,32.2436,70.3924,POINT(70.3924 32.2436)
230,Upper Dir,Khyber Pakhtunkhwa,35.2819,72.0357,POINT(72.0357 35.2819)
231,Tor Ghar,Khyber Pakhtunkhwa,34.5548,72.8342,POINT(72.8342 34.5548)
301,Bagh,Pakistan Jammu Kashmir,33.9934,73.74,POINT(73.74 33.9934)
302,Bhimber,Pakistan Jammu Kashmir,33.015,74.1317,POINT(74.1317 33.015)
303,Hattian,Pakistan Jammu Kashmir,34.1938,73.8335,POINT(73.8335 34.1938)
304,Haveli,Pakistan Jammu Kashmir,33.9359,74.1192,POINT(74.1192 33.9359)
305,Kotli,Pakistan Jammu Kashmir,33.4522,73.9154,POINT(73.9154 33.4522)
306,Mirpur,Pakistan Jammu Kashmir,33.2333,73.741,POINT(73.741 33.2333)
307,Muzaffarabad,Pakistan Jammu Kashmir,34.3534,73.5919,POINT(73.5919 34.3534)
308,Neelum,Pakistan Jammu Kashmir,34.7911,74.1758,POINT(74.1758 34.7911)
309,Poonch,Pakistan Jammu Kashmir,33.8167,73.8377,POINT(73.8377 33.8167)
310,Sudhnoti,Pakistan Jammu Kashmir,33.7025,73.7464,POINT(73.7464 33.7025)
401,Bajaur Agency,FATA,34.8129,71.4888,POINT(71.4888 34.8129)
402,Khyber Agency,FATA,33.9597,71.0668,POINT(71.0668 33.9597)
403,Kurram Agency,FATA,33.7083,70.324,POINT(70.324 33.7083)
404,Mohmand Agency,FATA,34.4655,71.3386,POINT(71.3386 34.4655)
405,North Waziristan Agency,FATA,32.9149,70.0102,POINT(70.0102 32.9149)
406,Orakzai Agency,FATA,33.7,70.9891,POINT(70.9891 33.7)
407,South Waziristan Agency,FATA,32.3139,69.7494,POINT(69.7494 32.3139)
408,Fr Bannu,FATA,33.128,70.5669,POINT(70.5669 33.128)
409,Fr D.i.khan,FATA,31.5766,70.1516,POINT(70.1516 31.5766)
410,Fr Kohat,FATA,33.6138,71.7182,POINT(71.7182 33.6138)
411,Fr Lakki Marwat,FATA,32.6382,70.3801,POINT(70.3801 32.6382)
412,Fr Peshawar,FATA,33.7387,71.7782,POINT(71.7782 33.7387)
413,Fr Tank,FATA,32.454,70.2779,POINT(70.2779 32.454)
501,Islamabad,Federal Capital Territory,33.6603,73.2535,POINT(73.2535 33.6603)
601,Attock,Punjab,33.4932,72.3096,POINT(72.3096 33.4932)
602,Bahawalnagar,Punjab,29.6066,73.0165,POINT(73.0165 29.6066)
603,Bahawalpur,Punjab,28.8306,71.7241,POINT(71.7241 28.8306)
604,Bhakkar,Punjab,31.651,71.4273,POINT(71.4273 31.651)
605,Chakwal,Punjab,32.8993,72.5333,POINT(72.5333 32.8993)
606,Chiniot,Punjab,31.6629,72.826,POINT(72.826 31.6629)
607,Dera Ghazi Khan,Punjab,30.4091,70.4456,POINT(70.4456 30.4091)
608,Faisalabad,Punjab,31.2372,73.1511,POINT(73.1511 31.2372)
609,Gujranwala,Punjab,32.1383,74.0915,POINT(74.0915 32.1383)
610,Gujrat,Punjab,32.7221,73.9945,POINT(73.9945 32.7221)
611,Hafizabad,Punjab,32.0254,73.5053,POINT(73.5053 32.0254)
612,Jhang,Punjab,31.2362,72.2445,POINT(72.2445 31.2362)
613,Jhelum,Punjab,32.9546,73.5088,POINT(73.5088 32.9546)
614,Kasur,Punjab,31.0531,74.1596,POINT(74.1596 31.0531)
615,Khanewal,Punjab,30.3679,72.0217,POINT(72.0217 30.3679)
616,Khushab,Punjab,32.1885,72.1054,POINT(72.1054 32.1885)
617,Lahore,Punjab,31.4651,74.36,POINT(74.36 31.4651)
618,Layyah,Punjab,30.9715,71.2487,POINT(71.2487 30.9715)
619,Lodhran,Punjab,29.6742,71.6924,POINT(71.6924 29.6742)
620,Mandi Bahauddin,Punjab,32.4351,73.4539,POINT(73.4539 32.4351)
621,Mianwali,Punjab,32.6648,71.5316,POINT(71.5316 32.6648)
622,Multan,Punjab,29.9394,71.4065,POINT(71.4065 29.9394)
623,Muzaffargarh,Punjab,30.0522,71.0406,POINT(71.0406 30.0522)
624,Nankana Sahib,Punjab,31.3948,73.8511,POINT(73.8511 31.3948)
625,Narowal,Punjab,32.2058,74.9955,POINT(74.9955 32.2058)
626,Okara,Punjab,30.7082,73.6867,POINT(73.6867 30.7082)
627,Pakpattan,Punjab,30.3003,73.248,POINT(73.248 30.3003)
628,Rahim Yar Khan,Punjab,28.418,70.5476,POINT(70.5476 28.418)
629,Rajanpur,Punjab,29.1645,70.0326,POINT(70.0326 29.1645)
630,Rawalpindi,Punjab,33.3045,73.1317,POINT(73.1317 33.3045)
631,Sahiwal,Punjab,30.5467,72.8979,POINT(72.8979 30.5467)
632,Sargodha,Punjab,32.0951,72.7434,POINT(72.7434 32.0951)
633,Sheikhupura,Punjab,31.735,74.1351,POINT(74.1351 31.735)
634,Sialkot,Punjab,32.4106,74.535,POINT(74.535 32.4106)
635,Toba Tek Singh,Punjab,30.8776,72.5519,POINT(72.5519 30.8776)
636,Vehari,Punjab,30.0093,72.4088,POINT(72.4088 30.0093)
701,Awaran,Balochistan,26.1945,65.3826,POINT(65.3826 26.1945)
702,Barkhan,Balochistan,29.9495,69.6112,POINT(69.6112 29.9495)
703,Panjpai,Balochistan,30.0219,66.4705,POINT(66.4705 30.0219)
704,Chagai,Balochistan,28.9784,63.2804,POINT(63.2804 28.9784)
705,Dera Bugti,Balochistan,28.8634,69.0192,POINT(69.0192 28.8634)
706,Gwadar,Balochistan,25.3977,63.1311,POINT(63.1311 25.3977)
707,Harnai,Balochistan,30.1944,67.8174,POINT(67.8174 30.1944)
708,Jaffarabad,Balochistan,28.3037,68.1975,POINT(68.1975 28.3037)
709,Jhal Magsi,Balochistan,28.4055,67.5254,POINT(67.5254 28.4055)
710,Kalat,Balochistan,29.0324,66.646,POINT(66.646 29.0324)
711,Kachhi,Balochistan,29.2541,67.5868,POINT(67.5868 29.2541)
712,Kech,Balochistan,25.9976,63.0455,POINT(63.0455 25.9976)
713,Kharan,Balochistan,28.6127,65.4671,POINT(65.4671 28.6127)
714,Khuzdar,Balochistan,27.4615,66.6457,POINT(66.6457 27.4615)
715,Killa Abdullah,Balochistan,30.5623,66.4942,POINT(66.4942 30.5623)
716,Killa Saifullah,Balochistan,30.9651,68.3215,POINT(68.3215 30.9651)
717,Kohlu,Balochistan,29.5889,68.8467,POINT(68.8467 29.5889)
718,Las Bela,Balochistan,25.7993,66.6479,POINT(66.6479 25.7993)
719,Loralai,Balochistan,30.3035,68.9,POINT(68.9 30.3035)
720,Mastung,Balochistan,29.7815,66.8306,POINT(66.8306 29.7815)
721,Musakhel,Balochistan,30.8705,69.9203,POINT(69.9203 30.8705)
722,Nasirabad,Balochistan,28.5941,68.105,POINT(68.105 28.5941)
723,Nushki,Balochistan,29.455,65.7727,POINT(65.7727 29.455)
724,Panjgur,Balochistan,26.6533,64.2056,POINT(64.2056 26.6533)
725,Pishin,Balochistan,30.8106,67.2539,POINT(67.2539 30.8106)
726,Quetta,Balochistan,30.2497,66.9735,POINT(66.9735 30.2497)
727,Sheerani,Balochistan,31.643,69.7742,POINT(69.7742 31.643)
728,Sibi,Balochistan,29.572,67.9999,POINT(67.9999 29.572)
729,Washuk,Balochistan,27.897,64.3796,POINT(64.3796 27.897)
730,Zhob,Balochistan,31.371,69.0169,POINT(69.0169 31.371)
731,Ziarat,Balochistan,30.4053,67.5369,POINT(67.5369 30.4053)
801,Badin,Sindh,24.7256,68.8428,POINT(68.8428 24.7256)
802,Dadu,Sindh,26.8701,67.496,POINT(67.496 26.8701)
803,Ghotki,Sindh,27.82,69.6447,POINT(69.6447 27.82)
804,Hyderabad,Sindh,25.3411,68.4568,POINT(68.4568 25.3411)
805,Jacobabad,Sindh,28.2875,68.6785,POINT(68.6785 28.2875)
806,Jamshoro,Sindh,25.7371,67.7922,POINT(67.7922 25.7371)
807,Karachi City,Sindh,25.0732,67.1989,POINT(67.1989 25.0732)
808,Kashmore,Sindh,28.2816,69.2589,POINT(69.2589 28.2816)
809,Khairpur,Sindh,26.8257,69.0816,POINT(69.0816 26.8257)
810,Larkana,Sindh,27.5249,68.1937,POINT(68.1937 27.5249)
811,Matiari,Sindh,25.7664,68.4529,POINT(68.4529 25.7664)
812,Mirpur Khas,Sindh,25.2209,69.1826,POINT(69.1826 25.2209)
813,Naushahro Feroze,Sindh,26.8801,68.1241,POINT(68.1241 26.8801)
814,Sanghar,Sindh,25.9513,69.2844,POINT(69.2844 25.9513)
815,Qambar Shahdadkot,Sindh,27.6375,67.7111,POINT(67.7111 27.6375)
816,Shaheed Benazirabad,Sindh,26.3657,68.3311,POINT(68.3311 26.3657)
817,Shikarpur,Sindh,27.9502,68.6066,POINT(68.6066 27.9502)
818,Sukkur,Sindh,27.4377,69.186,POINT(69.186 27.4377)
819,Tando Allah Yar,Sindh,25.4654,68.7757,POINT(68.7757 25.4654)
820,Tando Muhammad Khan,Sindh,25.0098,68.479,POINT(68.479 25.0098)
821,Tharparkar,Sindh,24.7821,70.1791,POINT(70.1791 24.7821)
822,Thatta,Sindh,24.4785,67.9798,POINT(67.9798 24.4785)
823,Umerkot,Sindh,25.3851,69.778,POINT(69.778 25.3851)

*****************************
*JAR Organizations CSV Data:*
*****************************
Organization Name,Acronym,Operational Presence,Head of Organization Name,Telephone,Email,Assessment Focal Person Name,Telephone,Email
Jeejal Foundation Sindh,JFS,Ghotki,AB,123,a@b.info,GHI,5432,a@b.info
PDI,PDI,Mardan,CD,456,cd@b.info,JKL,12345,cd@b.info
PWDS,PWDS,Qambar Shahdadkot,EF,789,a@b.info,VWX,67890,a@b.info
SDP,SDP,Shikarpur,GH,987,a@b.info,YZAB,98765,a@b.info
SECO,SECO,Tando Allah Yar,IJ,654,a@b.info,CDEF,43212,a@b.info
WISES,WISES,"Badin,Dadu,Shikarpur,Thatta",KL,321,a@b.info,DEF,34567,a@b.info
CDNO,CDNO,Jacobabad,MN,1234,a@b.info,GHIJ,89098,a@b.info
SEED Society,SS,Tando Muhammad Khan,OP,5678,a@b.info,KLMN,76543,a@b.info
DIYA,DIYA,Ghotki,QR,9098,a@b.info,OPQR,21234,a@b.info
NRDP,NRDP,Dera Ghazi Khan,ST,7654,a@b.info,STUV,56789,a@b.info
NSDC,NSDC,Shaheed Benazirabad,UV,3212,a@b.info,WZYZ,987654,a@b.info
VWCO,VWCO,Khairpur,WX,3456,a@b.info,STU,321234,a@b.info
SSDO,SSDO,Tando Muhammad Khan,YX,7890,a@b.info,PQR,567890,a@b.info
AGAHE,AGAHE,"Rajanpur,Vehari,Okara,Lahore",ABC,9876,a@b.info,MNO,9876543,a@b.info

**************************
*Office Details CSV Data:*
**************************
Organization,Office Type,No. PDAs/Android,Staf Male,Staff Female,No. of vehicles,City,District
AGAHE (AGAHE),Sub Office,1,4,1,4,Karachi City,Karachi City
SSDO (SSDO),Sub Office,2,3,2,3,Peshawar,Peshawar
VWCO (VWCO),Sub Office,3,2,3,2,Lahore,Lahore
NSDC (NSDC),Sub Office,4,1,4,1,Quetta,Quetta
AGAHE (AGAHE),Head Office,3,2,3,2,Awaran,Awaran
SSDO (SSDO),Head Office,2,3,2,3,Bajaur Agency,Bajaur Agency
VWCO (VWCO),Head Office,1,4,1,4,Abbottabad,Abbottabad
NSDC (NSDC),Head Office,2,3,2,3,Bagh,Bagh
AGAHE (AGAHE),Site Office,3,2,3,2,Bhimber,Bhimber
SSDO (SSDO),Site Office,4,1,4,1,Tank,Tank
VWCO (VWCO),Site Office,3,2,3,2,Gilgit,Gilgit	