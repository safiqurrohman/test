<?php
 include 'connect.php';
 if(isset($_POST['submit'])){
     $nama=$_POST['nama'];
     $alamat=$_POST['alamat'];
     $nomor=$_POST['nomor'];
     $email=$_POST['email'];
     $password=$_POST['password'];

     $sql="insert into `crud` (nama,alamat,nomor,email,password) values('$nama','$alamat','$nomor','$email','$password')";
     $result=mysqli_query($con,$sql);
     if($result){
        // echo "data insert sukses";
        header('location: display.php');
     }else{
        die(msqli_error($con));
     }
    }
?>



<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.0.0/dist/css/bootstrap.min.css">

    <title>user</title>
  </head>
  <body>
        <div class="container my-5">
            <form method="post" >
                <div class="form-group">
                    <label >Nama</label>
                    <input type="text" class="form-control"  placeholder="Masukkan nama lengkap " name="nama">
                </div>
                <div class="form-group">
                    <label >Alamat</label>
                    <input type="text" class="form-control"  placeholder="Masukkan alamat  " name="alamat" autocomplete="off">
                </div>
                <div class="form-group">
                    <label >No.Telp</label>
                    <input type="number" class="form-control"  placeholder="Masukkan No.telephon " name="nomor" autocomplete="off">
                </div>
                <div class="form-group">
                    <label >Email</label>
                    <input type="email" class="form-control"  placeholder="Masukkan email " name="email" autocomplete="off">
                </div>
                <div class="form-group">
                    <label >Password</label>
                    <input type="password" class="form-control"  placeholder="Masukkan password " name="password" autocomplete="off">
                </div>
                <button type="submit" name="submit" class="btn btn-primary" style="padding:0.5rem 2.5rem; margin-top:1rem;">Submit</button>
            </form>
        </div>
  </body>
</html>