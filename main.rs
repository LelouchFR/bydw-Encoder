use std::io;

fn encode() -> String {
    println!("Phrase a encoder: ");
    let mut user_input_encode: String = String::new();
    let mut i: usize = 0;
    let _alpha: String = String::from("abcdefghijklmnopqrstuvwxyz");
    let stdin = io::stdin();

    stdin.read_line(&mut user_input_encode).ok();
    while i < user_input_encode.chars().count() {
        let _index = _alpha.find(*&mut user_input_encode.chars().nth(i).unwrap()).unwrap();
        let mut sch: usize = _index + i;
        if i % 2 == 0 {
            sch = sch + 1;
            print!("{}", _alpha.chars().nth(sch).unwrap());
        } else {
            sch = sch - i * 2;
            print!("{}", _alpha.chars().nth(sch - 1).unwrap());
        }
        i = i + 1;
    }
    return "hh".to_string();
}

fn decode() -> String {
    println!("Phrase a decoder: ");
    let mut user_input_encode: String = String::new();
    let mut i: usize = 0;
    let _alpha: String = String::from("zyxwvutsrqponmlkjihgfedcba");
    let stdin = io::stdin();

    stdin.read_line(&mut user_input_encode).ok();
    while i < user_input_encode.chars().count() {
        let _index = _alpha.find(*&mut user_input_encode.chars().nth(i).unwrap()).unwrap();
        let mut sch: usize = _index + i;
        if i % 2 == 0 {
            sch = sch + 1;
            print!("{}", _alpha.chars().nth(sch).unwrap());
        } else {
            sch = sch - i * 2;
            print!("{}", _alpha.chars().nth(sch - 1).unwrap());
        }
        i = i + 1;
    }
    return "hh".to_string();
}

fn main() -> io::Result<()> {
    println!("1 -> Encode\n2 -> Decode\n3 -> Quit\n");
    let mut user_input = String::new();
    let stdin = io::stdin();

    stdin.read_line(&mut user_input)?;
    let trimmed = user_input.trim();
    
    match trimmed.parse::<u32>() {
        Ok(1) => encode(),
        Ok(2) => decode(),
        Ok(3) => "Quitting...".to_string(),
        Err(_) => "Quitting...".to_string(),
        Ok(0_u32) | Ok(3_u32..=u32::MAX) => todo!(),
    };

    Ok(())
}
