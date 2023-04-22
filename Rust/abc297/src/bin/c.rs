use proconio::input;

fn main() {
    input! {
        h: i32,
        w: i32,
        mut s: [String;h],
    }

    for i in s.iter_mut() {
        let mut z = 1;
        while z < i.len() as usize {
            if (i.chars().nth(z - 1).unwrap() == 'T') & (i.chars().nth(z).unwrap() == 'T') {
                i.replace_range((z - 1)..z, "P");
                i.replace_range(z..z + 1, "C");
                z += 2;
            } else {
                z += 1;
            }
        }
        println!("{}", i);
    }
}
