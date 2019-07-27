function getBiodata(){
  let biodata = {
    name		: "Alina Dwi Iknatia",
    age			: 22,
    addres		: "Ujung Harapan, Jalan Bumi Bahagia IV no 72, Bekasi 17612",
    hobbies		: ["Travelling", "Social", "Music"],
    is_married	: false,
    list_school	: [{name: "SMAN 2 Babelan", year_in: 2011, year_out: 2014, major: "IPA"},
     				 {name: "Universitas Syiah Kuala", year_in: 2014, year_out: 2019, major:"Matematika"}],
    skills		: [{skill_name: "C", level: "beginner"},
            		 {skill_name: "C#", level: "beginner"},
            		 {skill_name: "JavaScript", level: "beginner"},
           			 {skill_name: "Unity", level: "beginner"},
            		 {skill_name: "Blender", level: "beginner"}],
    
    interest_in_coding: true
  }
 
  let convertToJson = JSON.stringify(biodata)
  return convertToJson
}
console.log(getBiodata());
